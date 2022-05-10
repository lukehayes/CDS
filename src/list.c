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
