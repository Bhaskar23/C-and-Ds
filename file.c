#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("malloc.txt", "r");
    if(fp==NULL)
    {
        printf("File open failure\n");
        exit(0);
    }
    while((ch=fgetc(fp))!=EOF)
          // printf("%c ",ch);
            fputc(ch,stdout);
    printf("File open successful\n");
    fclose(fp);
     return 0;
}
