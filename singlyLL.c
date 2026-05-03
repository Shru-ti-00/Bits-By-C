#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* createNode(int value)
{
    struct Node* newNode=(struct Node*)malloc(struct Node);
    newNode->data=value;
    newNode->next=NULL;
}