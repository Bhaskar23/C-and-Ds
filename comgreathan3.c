#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int sum=0;
    if(argc>3)
    {
        for(int i=1;i<argc;i++)
        {
           sum+=atoi(argv[i]);
        }
        printf("sum=%d\n",sum);
       
    }
    else
    {
        printf("addition is not possible\n");
    }
    
   
   
}