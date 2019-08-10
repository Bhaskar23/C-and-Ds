#include<stdio.h>
void add(int a,int b)
{
 printf("add=%d\n",a+b);   
}
void sub(int a,int b)
{
 printf("diff=%d\n",a-b);   
}
void mul(int a,int b)
{
 printf("mul=%d\n",a+b);   
}
int main()
{
    int ch;
    printf("enter choice:\n");
    scanf("%d",&ch);
    void(*fptr[3])(int,int)={add,sub,mul};
    fptr[ch-1](20,40);
}