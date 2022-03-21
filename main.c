#include <stdio.h>
#include "list/list.h"
#include "stack/stack.h"

int main()
{
    Stack s = StackCreate(5, INT);

    StackInsert(&s, (int*)100);
    StackInsert(&s, (int*)200);
    StackInsert(&s, (int*)500);

    printf("Data: %i \n", ((int*)s.data)[0]);

    /*StackDestroy(&s);*/

    return 0 ;
}
