#include<stdio.h>
#include<stdlib.h>

//structure of a node
struct Node
{
    int data;
    struct Node* next;
};

//creating node
struct Node* createNode(int value)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
}