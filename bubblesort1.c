#include<stdio.h>
void bubble(int[],int);
int main()
{
    int size;
    printf("Enter size:\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble(a,size);
}
void bubble(int a[],int size)
{
    int pass,j,i;
    int temp;
    for(pass=1;pass<size;pass++)
    { 
       
        for(j=0;j<size-pass;j++)
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
        printf("%d ",a[i]);
    }
}