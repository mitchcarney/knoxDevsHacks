#include "node.h"
#include <stdlib.h>

node_t* initNode (athlete_t anAthlete) {
        node_t* nodePtr;
        nodePtr = (node_t*) malloc(sizeof(node_t));
        nodePtr-> anAthlete = anAthlete;
        nodePtr->nextPtr=NULL;
        nodePtr -> prevPtr = NULL;
        return nodePtr;
}



