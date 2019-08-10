#include<stdio.h>
int main()
{
    int a=0;
    int b=20;
    const int *const ptr=&a;
    //*ptr=12345;//its shows error
    //*ptr=&b;// its shows error
    a=12345;
    printf("%d\n",*ptr);
}