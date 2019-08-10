#include<stdio.h>
int binary(int[],int,int);
int main()
{
   int size;
   printf("Enter size:\n");
   scanf("%d",&size); 
   int arr[size];
   printf("Enter array elements:\n");
   for(int i=0;i<size;i++)
   {
       scanf("%d",&arr[i]);
   }
   int key;
   printf("Enter the key:\n");
   scanf("%d",&key);
   int pos=binary(arr,size,key);
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
        if(key==arr[mid])
        return mid+1;
        else if(key>arr[mid])
            low=mid+1;
        else
            high=mid-1;
    }
    return 0;
}
