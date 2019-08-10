#include<stdio.h>
void fiba();
int main()
{
    int range;
    printf("Range:\n");
    scanf("%d",&range);
    for(int i=0;i<range;i++)
    {
    fiba();
    }
    return 0;
  
}
void fiba()
{
    static int sum=0,old=0,new=1;
        printf("%d\t",old);
        sum=old+new;
        old=new;
        new=sum;

}