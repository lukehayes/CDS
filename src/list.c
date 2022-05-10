#include "list/list.h"
#include <stdlib.h>

List* ListCreate(size_t size, DataType type)
{
    List* list = malloc(sizeof(List));
    list->head = NULL;
    return list;
}

void ListDestroy(List* list)
{
    free(list);
    list = NULL;
}

void ListInsert(List* list, Node* node)
{
    // TODO Finish implementation.
    List** listPtr = &list;
    Node*  current = list->head;

    if(current == NULL)
    {
        list->head        = malloc(sizeof(Node));
        list->head->next  = node->next;
        list->head->value = node->value;
    }else {
        current = current->next;

        while(current == NULL)
        {
            printf("Seaching... \n");
            current = current->next;
        }
        
    }
}
