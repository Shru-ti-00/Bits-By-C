#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
//Conditional statements 
    if(num & 1){
        printf("Number is odd");
    }
    else{
        printf("Number is even");
    }

    return 0;
}