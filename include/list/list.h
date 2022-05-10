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
 * @param DataType type    The type of data the list will store.  
 *
 * @return List*.
 */
List* ListCreate(size_t size, DataType type);

/**
 * Destroy the memory allocated by the List and NULL its pointer.
 *
 * @param List* stack    The List to be destroyed.
 *
 * @return List.
 */
void ListDestroy(List* list);

void ListInsert(List* list, Node* node);

#endif // CDS_LIST_H
