#include <stdio.h>

typedef struct _node {
    int value;
    struct _node *next;
}node;


void main() 
{
    struct _node nodeA;
    node node1;
    node node2;
    
    node1.value = 10;
    
    struct _node *pNodeA;
    node *pNode1;
    
    
    pNodeA.value = 100; //WRONG
    pNodeA->value = 100; //Error
    
    pNodeA = &node1;
    pNodeA->value = 100 //Correct
    
    
    pNodeA = malloc(sizeof(node));
    pNodeA = 100; // Correct
    
}

