#ifndef CDS_STACK_H
#define CDS_STACK_H

#include <stdlib.h>

typedef enum DataType 
{
    CHAR,
    INT,
    FLOAT,
    DOUBLE

} DataType;

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
 * @param size_t size      The number of elements
 * @param DataType type    The type of data the stack will store.  
 *
 * @return Stack.
 */
Stack StackCreate(size_t size, DataType type);

/**
 * Destroy the memory allocated by the stack and NULL its pointer.
 *
 * @param Stack* stack    The Stack to be destroyed.
 *
 * @return Stack.
 */
void  StackDestroy(Stack* stack);

void StackInsert(Stack* stack, void* value);

#endif
