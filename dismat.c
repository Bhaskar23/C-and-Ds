#include<stdio.h>
#define m 3
#define n 3
int main()
{
    int a[m][n];
    printf("Enter array value:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("array elements:\n");
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");

    }
}