#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Enter a value:\n");
    scanf("%d",&a);
    int b=a;
    for(int i=7;i>=0;i--)
    {
        b=a>>i;
        if(b&1)
         printf("1");
        else
        printf("0");
    }

  
}