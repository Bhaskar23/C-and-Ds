#include<stdio.h>
int main()
{
    int i,j,a,count=1;
    printf("Enter a value:");
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d\t",count++);
        }
        printf("\n");
    }
    return 0;
    

}