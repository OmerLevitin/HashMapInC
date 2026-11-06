# pragma once

#include "Code/data/DATA__exports.h"

typedef enum LINKED_LIST_RC_e {
    SUCCESS = 0,
    FAILED_TO_INIT_LIST = 1,
    FAILED_TO_ADD_ELEMENT = 2,
    FAILED_TO_REMOVE_ELEMENT = 3,
    FAILED_TO_FIND_ELEMENT = 4
} LINKED_LIST_RC_t;

typedef struct LINKED_LIST__node_s {
    DATA__element_t *element;
    LINKED_LIST__node_t *next_node;
} LINKED_LIST__node_t;