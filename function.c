#include<stdio.h>
int add(int,int);
int main()
{
    int a,b;
    printf("Enter a and b values:\n");
    scanf("%d %d",&a,&b);
    int sum=add(a,b);
    printf("sum=%d\n",sum);
}
int add(int x,int y)
{
    int z=x+y;
    return z;
}