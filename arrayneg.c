#include<stdio.h>
int main()
{
    int size,i;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Negative elements:\n");
    for(i=0;i<size;i++)
    {    
        if(a[i]<0)
        {
            printf("%d\t",a[i]);
        }
    }
}