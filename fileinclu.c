#include<stdio.h>
#include"new1.c"

int main()
{
    int fact,a;
    printf("Enter value:\n");
    scanf("%d",&fact);
    a=factorial(fact);
    printf("factorial=%d\n",a);
    return 0;
}