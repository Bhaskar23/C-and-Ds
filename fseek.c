#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char buffer[100];
    fp=fopen("malloc.txt","a");
    if(fp==NULL)
    {
        printf("FILE does not exists\n");
        exit(1);
    }
    fseek(fp,3,SEEK_SET);
    printf("1st:%lu\n",ftell(fp));
     fseek(fp,6,SEEK_CUR);
    printf("2nd:%lu\n",ftell(fp));
     fseek(fp,3,SEEK_END);
    printf("3rd:%lu\n",ftell(fp));
    fclose(fp);
    return 0;
}
