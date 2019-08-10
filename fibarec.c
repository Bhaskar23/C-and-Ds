#include<stdio.h>
int fiba(int);
int main()
{
    int range,i;
    printf("Range:\n");
    scanf("%d",&range);
    for(i=0;i<range;i++)
    {
        printf("%d ",fiba(i));
    }
    return 0;
  
}
int fiba(int range)
{
    if(range==0)
        return 0;
    if(range==1)
        return 1;
     return fiba(range-1)+fiba(range-2);
    
}