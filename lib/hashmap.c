#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>

#include "hashmap.h"

#define HASHSET_SIZE ((1 << 16)+1)


typedef struct _hashmap_node {
    const char* key;
    int value;
    struct _hashmap_node* next;
} HashmapNode;

struct _hashmap {
    HashmapNode* nodes[HASHSET_SIZE];
};

static uint16_t _hashmap_calc_hash(const char* key)
{
    uint16_t hash = 0;
    while(*key != '\0' && *(key+1) != '\0')
    {
        hash ^= *((uint16_t*)key);
        key += 2;
    }
    if(*key != '\0')
    {
        hash ^= *((uint16_t*)key);
    }
    return hash;
}

HashMap* hashmap_create(void)
{
    return calloc(1, sizeof(HashMap));
}

bool hashmap_set_value(HashMap* hashmap, const char* key, int value)
{
    uint16_t hash = _hashmap_calc_hash(key);
    HashmapNode* last_node = hashmap->nodes[hash];
    HashmapNode* node;
    if(hashmap->nodes[hash] != NULL)
    {
        while(last_node->next != NULL && strcmp(last_node->key, key) != 0)
        {
            last_node = last_node->next;
        }
        if(strcmp(last_node->key, key) == 0)
        {
            last_node->value = value;
            return true;
        }
    }
    node = (HashmapNode*) malloc(sizeof(HashmapNode));
    if(node == NULL)
    {
        return false;
    }
    node->key = key;
    node->value = value;
    node->next = NULL;
    if(hashmap->nodes[hash] != NULL)
    {
        last_node->next = node;
    }
    else
    {
        hashmap->nodes[hash] = node;
    }
    return true;
}

int hashmap_get_value(const HashMap* hashmap, const char* key)
{
    uint16_t hash = _hashmap_calc_hash(key);
    HashmapNode* node = hashmap->nodes[hash];
    while(node != NULL && strcmp(node->key, key) != 0)
    {
        node = node->next;
    }
    if(node == NULL)
    {
        return -1;
    }
    return node->value;
}

static void _free_list(HashmapNode* node)
{
    if(node == NULL)
    {
        return;
    }
    _free_list(node->next);
    free(node);
}

/*
Free the underlying hashmap behind the pointer HASHMAP and set the hashmap handler to NULL.
*/
void hashmap_free(HashMap** hashmap)
{
    if(*hashmap == NULL)
    {
        return;
    }
    for(int i = 0; i < HASHSET_SIZE; i++)
    {
        _free_list((*hashmap)->nodes[i]);
    }
    free(*hashmap);
    *hashmap = NULL;
}