#include "stack/stack.h"
#include <stdio.h>

static size_t stackCounter = 0;

static void IncreaseCounter()
{
    stackCounter += 1;
}

Stack StackCreate(size_t size, DataType type)
{
   size_t stackSize = 0;

   switch(type)
   {
        case CHAR:
            stackSize = sizeof(char) * size;
            break;

        case INT:
            stackSize = sizeof(int) * size;
            break;

        case FLOAT:
            stackSize = sizeof(float) * size;
            break;

        case DOUBLE:
            stackSize = sizeof(double) * size;
            break;
   }

    Stack s =  {
        .type = type,
        .size = size,
        .data = malloc(stackSize),
        .top  = NULL
    };

    return s;
}

void  StackDestroy(Stack* stack)
{
    free(stack->data);
    stack->data = NULL;
}

void StackInsert(Stack* stack, void* value, DataType type)
{
   void* v = NULL;

   switch(stack->type)
   {
        case CHAR:
            v = (char*)value;
            break;

        case INT:
            stack->data = (int*)malloc(sizeof(int));
            *(int*)stack->data = (int*)value;
            stack->top = stack->data + stackCounter;
            IncreaseCounter();
            break;

        case FLOAT:
            v = (float*)value;
            break;

        case DOUBLE:
            v = (double*)value;
            break;
   }
}

void StackPop(Stack* stack, DataType type)
{

}
