#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int d=10;
    char ch[100];
    fp=fopen("malloc.txt","w");
    if(fp==NULL)
    {
        printf("FILE does not exists\n");
        exit(0);
    }
    fprintf(fp,"this is fprintf\n");
    fprintf(fp,"value=%d",d);
    fclose(fp);
    return 0;
    }