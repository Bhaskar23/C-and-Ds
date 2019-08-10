#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:\n");
    scanf("%c",&ch);
    (ch>='A'&&ch<='z')||(ch>='a'&&ch<='z')?printf("It is an alphabet\n"):printf("It is not an alphabet\n");
    return 0;
}