#include<stdio.h>
int main()
{
    int i,space,a,k=0;
    printf("Enter a value:");
    scanf("%d",&a);
    for(i=0;i<=a;i++,k=0)
    {
        for(space=0;space<i;space++)
        {
            printf("%d",i-k);
            ++k;
        }
        printf("\n");
    }
    return 0;
    

}