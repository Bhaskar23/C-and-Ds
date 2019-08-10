#include<stdio.h>
int main()
{
    int a[6];
    int *ptr= &a[0];
    printf("Enter elements:\n");
    for(int i=0;i<6;i++)
    {
        scanf("%d",&(*(ptr+i)));
    }
    printf("Entered elements are:\n");
    for(int i=0;i<6;i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n");
}