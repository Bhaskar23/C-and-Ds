#include<stdio.h>
int main()
{
    unsigned int a;
    printf("Enter a:\n");
    scanf("%x",&a);
    a=((a<<4)&0xf0)|((a>>4)&0x0f);
    printf("x=%x\n",a);
    return 0;
}