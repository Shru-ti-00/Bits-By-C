#include<stdio.h>
#include<stdlib.h>

//structure of a node
struct Node
{
    int data;
    struct Node* next;
};

//insertion at Beginning
struct Node* insertAtBegin(struct Node* head,int value)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=head;
    head=newNode;
    return head;
}

struct Node* insertAtEnd(struct Node* head,int value)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;

    if(head==NULL)
        return newNode;

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
    
}
