#include<stdio.h>

void towerOfHanoi(int n, char A, char B, char C)
{
    if(n==1)
    {
        printf("Move disk 1 from %c to %c",A,C);
        return;
    }

    towerOfHanoi(n-1, A, C, B);

    printf("Move disk %d from %c to %c",n,A,C);

    towerOfHanoi(n-1,B,A,C);
}