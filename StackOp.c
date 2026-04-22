#include<stdio.h>
#define SIZE 5;

int stack[SIZE];
int top=-1;

//function for insert elements
void push(int value)
{
    if(SIZE==-1)
    {
        printf("Overflow\n");
    }
    else
    {
        stack[++top]=value;
    }
}

//function to delete lements
void pop()
{
    if(top==-1)
    {
        printf("Underflow\n");
    }
    else{
        printf("Popped:%d\n",stack[top--]);
    }
}

//function to display
void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
}

//main method
int main()
{
    push(10);
    push(20);
    push(30);
    pop();
    display();

    return 0;
}
