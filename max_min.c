#include<stdio.h>

int main()
{
    int size,i;
    int nums[size];
    int max,min;
    printf("Enter the no. of inputs:");
    scanf("%d",&size);
    printf("Enter the numbers:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&nums[i]);
    }
    
    max=min=nums[0];

    for(i=1;i<=size;i++)
    {
        if(nums[i]>max)
            max=nums[i];
        if(nums[i]<min)
            min=nums[i];
    }
    printf("Maximum value:%d\n",max);
    printf("Minimum value:%d",min);
    
    return 0;  

}