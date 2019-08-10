#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch[100];
    fp=fopen("malloc.txt","r");
    if(fp==NULL)
    {
        printf("FILE does not exists\n");
        exit(0);
    }
    while((fscanf(fp,"%s",ch))!=EOF)
    {
        printf("%s\n",ch);
    }
    fclose(fp);
    return 0;
    
}