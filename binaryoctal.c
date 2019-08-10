#include<stdio.h>
#include<math.h>
void octal(int);
void binary(int);
int main()
{
   int i,m,n;
   printf("Enter values:\n");
   scanf("%d %d",&m,&n);
   for(i=m;i<m+n;i++)
   {
       if(i%2==1)
           binary(i);
       else
           octal(i);
     }
}
void octal(int a)
{
    int b=a;
    int rem,sum=0;
    int i=0;
    while(a!=0)
    {
        rem=a%8;
        sum=sum+(rem*pow(10,i));
        a=a/8;
        i++;
    }
    printf("%d=%d(oct)\n",b,sum);
    
}
void binary(int a)
{
    int b=a;
    printf("%d=",a);
    for(int i=7;i>=0;i--)
    {
        b=a>>i;
        if(b&1)
         printf("1");
        else
        printf("0");
    }
    printf("(binary)\n");
}


