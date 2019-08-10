#include<stdio.h>
#include<math.h>
int main()
{
    int a,rem,sum=0;
    int i=0;
    printf("Enter a value:\n");
    scanf("%d",&a);

     while(a!=0)
    {
        rem=a%8;
        sum=sum+(rem*pow(10,i));
        a=a/8;
        i++;
    }
    printf("%d",sum);
    
  
}