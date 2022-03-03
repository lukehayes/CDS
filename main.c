#include <stdio.h>
#include "list/list.h"

int main()
{
    List* list = ListCreate();

    ListInsert(list, 100);

    ListDestroy(list);
    return 0 ;
}
