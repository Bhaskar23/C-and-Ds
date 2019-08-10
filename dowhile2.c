#include<stdio.h>
int main()
{
    int a,b;
    do
    {
         printf("Enter a value:\n");
         scanf("%d",&a);
        if(a>0)
        {
            printf("positive \n Do you want to check another number (0-No 1-yes)\n");
            scanf("%d",&b);
        
            
        }
        else
        {
            printf("Negative \n Do you want to check another number (0-No 1-yes)\n");
            scanf("%d",&b);
        
            
        }
    }while(b>0);

}