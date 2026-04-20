#include<stdio.h>

int main()
{
    int r1,c1,r2,c2;
    int i,j,k;
    int arr1[r1][c1],arr2[r2][c2],result[10][10];

    printf("Enter the number of rows and columns of first matrix:");
    scanf("%d %d",&r1,&c2);
    printf("Enter the numer of rows and columns of second matrix:");
    scanf("%d %d",&r2,&c2);

    printf("Enter the elements of first matrix:");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

    //display first matrix
    printf("First matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d",arr1[i][j]);
        }
        printf("\n");
    }

    //display second matrix
    printf("Second matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d",arr2[i][j]);
        }
        printf("\n");
    }

    //Array multiplication
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            result[i][j]=0;
            for(k=0;k<c1;k++)
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    //display resultant matrix
    printf("Result matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;


}