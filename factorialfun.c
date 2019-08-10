#include<stdio.h>
void factorial(int);
int main()
{
    int fact;
    printf("Enter number:\n");
    scanf("%d",&fact);
    factorial(fact);
    return 0;
}
void factorial(int fact)
{
     int i=1;
     if(fact==0||fact==1)
    {
        printf("factorial=1\n");
    }
    while(fact>1)
    {
        i=i*fact;
        --fact;
    }
    printf("%d\n",i);
}