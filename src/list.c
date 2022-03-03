#include "list/list.h"
#include <stdlib.h>

List* ListCreate()
{
    List* list = malloc(sizeof(List));
    list->next = null;
    return list;
}

void ListDestroy(List* list)
{
    free(list);
}


void ListInsert(List* list, int value)
{
    Node* head = list->next;

    if(head == NULL)
    {
        head->value = value;
    }
}

