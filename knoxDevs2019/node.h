#ifndef NODE_H
#define NODE_H

#inlude "clients.h"

typedef struct node_t {

        client_t person;
        struct node_t* nextPtr;
        struct node_t* prevPtr;
} node_t;

node_t* initNode(client_t);







