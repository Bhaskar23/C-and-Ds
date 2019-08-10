#include<stdio.h>
int main()
{
    int size;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    int a[size],b[size];
    printf("Enter array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered elements are:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
        b[i]=a[i];
    }
    printf("\nCopied array:\n");
        for(int i=0;i<size;i++)
    {
        printf("%d\t",b[i]);
    }
}