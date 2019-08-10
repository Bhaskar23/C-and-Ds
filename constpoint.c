#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    int *const ptr=&a;
    *ptr=1234;
    a=23456;
    printf("%d\n",*ptr);
    //ptr=&b; it show error
    // printf("%d\n",ptr);
}
