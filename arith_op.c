#include<stdio.h>

int main()
{
    int a,b;
    char ch;
    printf("Arithmetic Operations:\n '+'-Addition\n '-'-Subtraction\n '*'-Multiplication\n '/'-Division\n '%'-Remainder\n");
    printf("Enter two numbers for calculation:");
    scanf("%d %d",&a,&b);
    printf("Enter your choice:");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '+':
            
            printf("The sum of %d and %d is %d",a,b,a+b);

            break;
            
        case '-':
//print difference
            
            printf("The difference of %d and %d is %d",a,b,a-b);

            break;
            
        case '*':
            
            printf("The product of %d and %d is %d",a,b,a*b);

            break;

        case '/':
            if(b!=0)
            {
            printf("The quotient for %d and %d is %f",a,b,a/b);
            }
            else
                printf("Not divisible");
            break;

        case '%':
            
            printf("The remainder of %d and %d is %d",a,b,a%b);

            break;
        
        default:
            printf("Your input is invalid for the operations.");
            break;
    }
    return 0;
}