#include<stdio.h>
void fun(int *,int *);
int main()
{
    int a=10,b=20;
    printf("before fun call a=%d b=%d\n",a,b);
    fun(&a,&b);
    printf("after fun call a=%d b=%d\n",a,b);
    return 0;
}
void fun(int *a,int *b)
{
    int *temp;
    temp=a;
    a=b;
    b=temp;
    printf("In fun a=%d b=%d\n",*a,*b);
}