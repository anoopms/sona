#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int value;
    struct _node *next;
}node;

node* createNode(int value);
void deleteNode(node *addr);
void insertNode(int value);
void traverse();

node *start = NULL;

int main()
{
    
    insertNode(10);
    insertNode(20);
    insertNode(30);
    traverse();
    
    return 0;
}

void traverse()
{
    node *ptr;
    ptr = start;
    while(ptr != NULL)
    {
        printf("%d\n", ptr->value);
        ptr = ptr->next;
    }
}

void insertNode(int value) {
    node *nptr;
    nptr = createNode(value);
    nptr->next = start;
    start = nptr;
}

node* createNode(int value)
{
    node *newNode;
    newNode = malloc(sizeof(node));
    if(newNode == NULL)
    {
        printf("Not able to get memory\n");
        return NULL;
    }
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

void deleteNode(node *addr)
{
    free(addr);
}