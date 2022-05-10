#ifndef CDS_LIST_H
#define CDS_LIST_H

#include "list/node.h"
#include "DataType.h"

typedef struct List
{
    Node* head;
}List;

/**
 * Create a linked list data structure.
 *
 * @param size_t size      The number of elements
 * @param DataType type    The type of data the stack will store.  
 *
 * @return List*.
 */
List* ListCreate(size_t size, DataType type);

#endif // CDS_LIST_H
