#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int value)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

struct Node* insert(struct Node* root, int value)
{
    if(root==NULL)
    {
        return createNode(value);
    }

    if(value<root)
    {
        root->left=insert(root->left,value);
    }

    if(value>root)
    {
        root->right=insert(root->right,value);
    }

    return root;
}

void inorder(struct Node* root)
{
    if(root==NULL)
        return;
    
    inorder(root->left);

    printf("%d",root->data);

    inorder(root->right);
    
}

// main method
int main()
{
    struct Node* root=NULL;
    root=insert(root,50);
    insert(root,20);
    insert(root,30);
    insert(root,10);
    insert(root,70);
    insert(root,40);

    printf("Binary Serach Tree:");

    inorder(root);

    return 0;
}