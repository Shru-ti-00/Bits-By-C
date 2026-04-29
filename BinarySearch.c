#include<stdio.h>

int main()
{
    int arr[]={12,20,45,67,22,98,30};
    int size=sizeof(arr)/sizeof(arr[0]);
    int low=0,high=size-1,mid;
    int item;
    printf("Enter the element to be searched:");
    scanf("%d",&item);

    while(low<=high)
    {
        mid=(low+high)/2;

        if(arr[mid]==item)
            return mid;
        else if(arr[mid]<item)
            low=mid+1;
        else
            high=mid-1;
    }

    return -1;

}