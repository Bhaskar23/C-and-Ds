#include<stdio.h>
void scan(int[],int);
void print(int[],int);
int main()
{
    int a;
    printf("Enter array size:\n");
    scanf("%d",&a);
    int arr[a];
    scan(arr,a);
    return 0;
}
void scan(int arr[],int size)
{
    int i;
    printf("Enter the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    print(arr,size);
}
void print(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}