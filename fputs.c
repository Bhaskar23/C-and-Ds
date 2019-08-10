#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char buffer[100];
    fp=fopen("malloc.txt","a+");
    if(fp==NULL)
    {
        printf("FILE does not exists\n");
        exit(1);
    }
    fgets(buffer,100,fp);
    printf("%s",buffer);
    while(fgets(buffer,100,stdin)!=NULL)
    {
        fputs(buffer,fp);
    }
    fclose(fp);
    return 0;
}