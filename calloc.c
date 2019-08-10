#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=(int*)calloc(2,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memoery cant be allocated\n");
        exit(2);

    }

     printf("%u\n",ptr);
       printf("%u\n",*(ptr+1));


    
    free(ptr);
}