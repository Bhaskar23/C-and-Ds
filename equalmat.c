#include<stdio.h>
int main()
{
    int m,n,count=0;
    printf("enter m and n value:\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    int b[m][n];
    int c[m][n];
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
    printf("Enter value for b matrix:\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
          if(a[i][j]!=b[i][j])
          {
              count=1;
          }
        }
    }
    
   if(count==0)
   {
       printf("a and b are same\n");
   }
   else
   {
       printf("a and b are not equal\n");
   }
    return 0;

}
