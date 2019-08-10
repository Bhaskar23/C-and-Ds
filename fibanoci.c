#include<stdio.h>
void fiba();
int main()
{
    int range;
    printf("Range:\n");
    scanf("%d",&range);
    fiba(range);
    return 0;
  
}
void fiba(int range)
{
    int sum=0,old=0,new=1,i;
      for(i=0;i<range;i++)
    {
        printf("%d\t",old);
        sum=old+new;
        old=new;
        new=sum;
    }
}