
#!/usr/bin/env python3
import sys
import json
import re
import subprocess


# --- LSP helpers --------------------------------------------------

def send(msg):
    body = json.dumps(msg)
    sys.stdout.write(f"Content-Length: {len(body)}\r\n\r\n{body}")
    sys.stdout.flush()

def read_message():
    headers = {}
    while True:
        line = sys.stdin.readline()
        if line == "\r\n":
            break
        name, value = line.split(":", 1)
        headers[name.strip()] = value.strip()
    length = int(headers["Content-Length"])
    body = sys.stdin.read(length)
    return json.loads(body)

# --- Simple document store ---------------------------------------

docs = {}

# --- Main loop ----------------------------------------------------

while True:
    msg = read_message()
    method = msg.get("method")
    id_ = msg.get("id")

    # initialize
    if method == "initialize":
        send({
            "jsonrpc": "2.0",
            "id": id_,
            "result": {
                "capabilities": {
                    "textDocumentSync": 1,
                    "semanticTokensProvider": {
                        "full": True,
                        "legend": {"tokenTypes": ["keyword", "type", "comment", "function"], "tokenModifiers": ["definition"]}
                    },
                    "hoverProvider": True
                }
            }
        })

    # document opened / changed
    elif method == "textDocument/didOpen":
        uri = msg["params"]["textDocument"]["uri"]
        text = msg["params"]["textDocument"]["text"]
        docs[uri] = text

    elif method == "textDocument/didChange":
        uri = msg["params"]["textDocument"]["uri"]
        text = msg["params"]["contentChanges"][0]["text"]
        docs[uri] = text

    # highlight the word "match"
    elif method == "textDocument/semanticTokens/full":
        uri = msg["params"]["textDocument"]["uri"]
        text = docs.get(uri, "")
        tokens = []

        if not uri.endswith("p4"):
            continue

        try:
            pipe = subprocess.Popen(["/home/mactul/Documents/c-cpp/p4_lsp/build/Linux/x64/release/bin/p4_lsp", uri[len("file://"):]], encoding='ascii', stdout=subprocess.PIPE, stdin=subprocess.PIPE, stderr=sys.stderr, text=True, cwd="/home/mactul/Documents/c-cpp/p4_lsp/")
            answer = pipe.communicate(input=text)[0].strip()
            if len(answer) > 0:
                tokens = [int(x) for x in answer.split(' ')]
        except Exception as e:
            with open("/home/mactul/Documents/c-cpp/p4_lsp/log", "a") as file:
                file.write(str(e))
        send({"jsonrpc": "2.0", "id": id_, "result": {"data": tokens}})

    elif method == "textDocument/hover":
        uri = msg["params"]["textDocument"]["uri"]
        text = docs.get(uri, "")
        tokens = []

        if not uri.endswith("p4"):
            continue

        send({"jsonrpc": "2.0", "id": id_, "result": {"contents": str(msg["params"])}})

    # just acknowledge shutdown/exit
    elif method == "shutdown":
        send({"jsonrpc": "2.0", "id": id_, "result": None})
    elif method == "exit":
        sys.exit(0)

