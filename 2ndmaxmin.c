#include<stdio.h>
int main()
{
     int size,temp;
   printf("Enter size:\n");
   scanf("%d",&size); 
   int arr[size];
   printf("Enter array elements:\n");
   for(int i=0;i<size;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(int i=0;i<size-1;i++)
   {
       for(int j=i+1;j<size;j++)
       {
           if(arr[i]>arr[j])
           {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;

           }

       }
     
   }
    printf("2nd max:%d\n",arr[size-2]);
    printf("2nd min:%d\n",arr[1]);
}