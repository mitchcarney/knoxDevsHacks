#ifndef LIST_H
#define LIST_H
#include <stdlib.h>

#include "node.h"
#include "patients.h"

typedef struct {
        node_t* headPtr;
        node_t* tailPtr;
} dbl_linked_list_t;


printClient(list_t* list);

#endif


