#include<stdio.h>

int main()
{
    int arr1[2][2],arr2[2][2];
    int i,j,k,l,r,c;
    int sum[2][2];
    printf("Enter elements for first matrix:");
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            scanf("%d",&arr1[r][c]);
        }
    }

    printf("Enter elements for second matrix:");
    for(k=0;k<2;k++)
    {
        for(l=0;l<2;l++)
        {
            scanf("%d",&arr2[k][l]);
        }
    }

    //display first matrix 
    printf("the first matrix is:\n");
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            printf("%d ",arr1[r][c]);
        }
        printf("\n");
    }

    //display second matrix
    printf("the second matrix is:\n");
    for(k=0;k<2;k++)
    {
        for(l=0;l<2;l++)
        {
            printf("%d ",arr2[k][l]);
        }
        printf("\n");
    }

    //sum of the matrices
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
        
    }
    printf("sum of the matrices:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }


    return 0;
}