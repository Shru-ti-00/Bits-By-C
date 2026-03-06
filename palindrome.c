#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,len,flag=1;

    printf("Enter a word:");
    scanf("%s",&str);

    len=strlen(str)-1;

    for(i=0;i<len;i++)
    {
        if(str[i]!=str[len])
        {
            flag=0;
            break;
        }
    }

    if(flag==1){
        printf("Its a palindrome");
    }
    else{
        printf("Its not a palindrome");
    }
}