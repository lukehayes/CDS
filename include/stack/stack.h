#ifndef CDS_STACK_H
#define CDS_STACK_H

#include <stdlib.h>
#include "DataType.h"

typedef struct Stack 
{
    DataType type;
    size_t   size;
    void*    data;
    void*    top;

} Stack;

/**
 * Create a stack data structure.
 *
 * @param size_t   size    The number of elements
 * @param DataType type    The type of data the stack will store.  
 *
 * @return Stack.
 */
Stack StackCreate(size_t size, DataType type);

/**
 * Destroy the memory allocated by the stack and NULL its pointer.
 *
 * @param Stack* stack    The stack to be destroyed.
 *
 * @return Stack.
 */
void  StackDestroy(Stack* stack);

/**
 * Insert a value into the stack.
 *
 * @param Stack*    stack    The stack to have a value added.
 * @param void*     value    The value to be added.
 * @param DataType  type     The type of data.
 *
 * @return void
 */
void StackInsert(Stack* stack, void* value, DataType type);

void StackPop(Stack* stack, DataType type);

#endif
