#include<stdio.h>
int main()
{
    int fact;
    int i=1;
    scanf("%d",&fact);
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
    return 0;
}