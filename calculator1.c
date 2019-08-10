#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()
{
    int a,b,addition,subract,multi,division;
    printf("Enter a and b value:\n");
    scanf("%d %d",&a,&b);
    printf("\n");
    addition=add(a,b);
    subract=sub(a,b);
    multi=mul(a,b);
    division=div(a,b);
    printf(" add=%d\n sub=%d\n mul=%d\n div=%d\n",addition,subract,multi,division);
    return 0;

}
int add(int a,int b)
{
    int c=a+b;
    return c;
}
int sub(int a,int b)
{
    int c=a-b;
    return c;
}
int mul(int a,int b)
{
    int c=a*b;
    return c;
}
int div(int a,int b)
{
    int c=a/b;
    return c;
}