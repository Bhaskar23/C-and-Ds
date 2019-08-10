#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char buffer[100];
    fp=fopen("malloc.txt","r");
    if(fp==NULL)
    {
        printf("FILE does not exists\n");
        exit(0);
    }
    fgets(buffer,100,fp);
    printf("%s",buffer);
    fclose(fp);
    return 0;
}