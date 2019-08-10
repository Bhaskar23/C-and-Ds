#include<stdio.h>
int main()
{
    int m,n,sum=0;
    printf("enter m and n value:\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    int i,j;
    printf("Enter value for a matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
       sum+=a[i][i];
    }
    printf("Sum=%d\n",sum);
    
  
    return 0;

}
