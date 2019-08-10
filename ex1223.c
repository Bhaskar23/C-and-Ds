#include<stdio.h>
int main()
{
    char a;
    printf("Enter alphabet:\n");
    scanf("%c",&a);
    if((a>='A')&&(a<='Z'))
    {
    printf("It is Uppercase\n");
    }
    else if((a>='a')&&(a<='z'))
    {
    printf("It is lowercase\n");
    }
    else
    {
        printf("Not found");
    }
    return 0;
}
