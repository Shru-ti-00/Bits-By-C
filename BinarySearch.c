#include<stdio.h>

int BinarySearch(int arr[],int item)
{
    
    int size;
    int low=0,high=size-1,mid;
    

    if(low>high)
        return -1;

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

}

int main()
{
    int arr[]={12,20,45,67,22,98,30};
    int size=sizeof(arr)/sizeof(arr[0]);
    int item;
    printf("Enter the element to be searched:");
    scanf("%d",&item);
    
    int result=BinarySearch(arr,item);

    if(result!=-1)
        printf("Element found at index %d ",result);
    else
        printf("Element not found");

    return 0;
}