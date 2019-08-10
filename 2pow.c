#include<stdio.h>
int main()
{
    int a,b,count=0;
    printf("Enter value:\n");
    scanf("%d",&a);
    for(int i=31;i>0;i--)
    {
        b=a>>i;
        if(b&1)
        {
            count+=1;
        }
     }
   (count>1)?printf("%d is not 2 power of n\n",a):printf("%d is 2 power of n\n",a);
    return 0;
}