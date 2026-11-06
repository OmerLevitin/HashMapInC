#pragma once

/**
Define a linked list.
*/

#include "Code/data/DATA__exports.h"
#include "Code/linked_list/LINKED_LIST__internals.h"

typedef LINKED_LIST__node_t LINKED_LIST__list_t;

LINKED_LIST_RC_t LINKED_LIST__list__init(LINKED_LIST__list_t* list);

LINKED_LIST_RC_t LINKED_LIST__list__append(LINKED_LIST__list_t *list, DATA__element_t *element);

LINKED_LIST_RC_t LINKED_LIST__list__remove(LINKED_LIST__list_t *list, DATA__element_t *element);

LINKED_LIST_RC_t LINKED_LIST__list__find(LINKED_LIST__list_t *list, DATA__key_t *element_key);
