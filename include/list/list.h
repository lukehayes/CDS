#ifndef CDS_LIST_H
#define CDS_LIST_H

#include "list/node.h"

typedef struct List
{
    Node* next;
}List;

/**
 * Create a new list.
 *
 * @return List* Pointer to the list.
 */
struct List* ListCreate();

/**
 * Destroy a list
 *
 * @param List* Pointer to the list.
 */
void ListDestroy(List* list);

/**
 * Insert a value into the list.
 * 
 * @param List* list
 * @param int value
 */
void ListInsert(List* list, int value);


void ListPrint(List* list)
{
    Node* head = list->next;

    while(head->next != NULL)
    {
        printf("Value %i \n", head->value);
        head = head->next;
    }
}


#endif // CDS_LIST_H
