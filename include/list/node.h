#ifndef CDS_NODE_H
#define CDS_NODE_H

#include <stdio.h>

typedef struct Node
{
    int value;
    struct Node* next;

} Node;

void PrintValue(Node* node);


#endif // CDS_NODE_H
