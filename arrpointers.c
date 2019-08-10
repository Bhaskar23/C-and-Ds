#include<stdio.h>
int main()
{
    int a[]={10,20,30};
    int *ptr=a;
    for(int i=0;i<3;i++)
    {
        ptr[i]+=10;
    }
    for(int i=0;i<3;i++)
    {
        printf("%d\n",a[i]);
    }
}