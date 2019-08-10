#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,sum=0,rem;
    int count=0;
    printf("Enter number:");
    scanf("%d",&b);
    a=b;
    int c=a;
    while(c!=0)
    {
        count=count+1;
        c=c/10;
    }
    while(a!=0)
    {
        rem=a%10;
        sum=sum+pow(rem,count);
        a=a/10;
    }
    if(b!=sum)
    {
        printf("Given number %d is not armstrong\n",b);
    }
    else
    {
        printf("Given number %d is armstrong \n",b);
    }
    return 0;
}