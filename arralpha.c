#include<stdio.h>
int main()
{
    char str[15];
    int l,temp;
    printf("Enter the string:\n");
    scanf("%s",str);
    printf("entered string:%s\n",str);
    l=sizeof(str);
    for(int i=1;i<l;i++)
    { 
       
        for(int j=0;j<l-i;j++)
        {
        if(str[j]>str[j+1])
        {
            temp=str[j];
            str[j]=str[j+1];
            str[j+1]=temp;
        }
        }
    }
    for(int i=0;i<l;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}