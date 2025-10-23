#ifndef HASHMAP_H
#define HASHMAP_H

#include <stdbool.h>


typedef struct _hashmap HashMap;

HashMap* hashmap_create(void);

bool hashmap_set_value(HashMap* hashmap, const char* key, int value);
int hashmap_get_value(const HashMap* hashmap, const char* key);

void hashmap_free(HashMap** hashmap);

#endif