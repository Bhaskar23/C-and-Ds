#include<stdio.h>
int binary(int[],int,int);
int main()
{
   int arr[]={2,5,8,9,13,34,16};
   int key;
   printf("Enter the key:\n");
   scanf("%d",&key);
   int pos=binary(arr,7,key);
   if(pos)
   printf("element is found at %d position\n",pos);
   else
   printf("element not found\n");
}
   
int binary(int arr[],int n,int key)
 {
    int low=0;;
    int high=n-1;
    int mid;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        return mid+1;
        else if(key>arr[mid])
            low=mid+1;
        else
            high=mid-1;
    }
    return 0;
}
