#include<stdio.h>
int main()
{
    int a=(89,10);
    printf("%d\n",a);
    int b,c;
    a=b=(100,456,c=45);
    printf("%d %d %d\n",a,b,c);
    return 0;
}