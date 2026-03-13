#include<stdio.h>

int main()
{
    int num,i;
    int flag=1;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num==0 || num==1){
        flag=0;
    }
    for(i=2;i<=num/2;++i)
    {
        if(num%i==0)
            flag=0;
    }
    if(flag==1){
        printf("Its a prime number.");
    }
    else
        printf("Its not a prime number.");
}
