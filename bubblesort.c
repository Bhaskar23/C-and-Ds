#include<stdio.h>
void bubble(int[],int);
int main()
{
    int a[8]={2,1,5,7,4,3,6,8};
    bubble(a,8);
}
void bubble(int a[],int size)
{
    int i,j;
    int temp;
    for(i=1;i<6;i++)
    { 
       
        for(j=0;j<size-i;j++)
        {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        }
    }
    printf("sorted elements:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
}