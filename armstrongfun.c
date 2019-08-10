#include<stdio.h>
#include<math.h>
int arm(int);
int main()
{
    int b;
    int res;
    printf("Enter number:");
    scanf("%d",&b);
    int a=b;
    res=arm(b);
    if(a!=res)
    {
        printf("Given number %d is not armstrong\n",a);
    }
    else
    {
        printf("Given number %d is armstrong \n",a);
    }
   
    return 0;
}
int arm(int b)
{
     int a;
     int sum=0;
     int rem;
     int count=0;
    while(a!=0)
    {
        count=count+1;
        a=a/10;
    }
    while(b!=0)
    {
        rem=b%10;
        sum=sum+pow(rem,count);
        b=b/10;
    }
     
    return sum;
}