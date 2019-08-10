#include<stdio.h>
int main()
{
    int b,c;
    char a;
    printf("Enter b and c:\n");
    scanf("%d %d",&b,&c);
    printf("+:ADD\n-:SUB\n*:MUL\n/:DIV \n");
    printf("Enter operator:\n");
    scanf(" %c",&a);
    switch(a)
    {
        case '+':
        {
            a=b+c;
            break;
        }
        case '-':
        {
            a=b-c;
            break;
        }
        case '*':
        {
            a=b*c;
            break;
        }
        case '/':
        {
            a=b/c;
            break;
        }
        default:
        {
            printf("Enter correct operator\n");
        }
    }
      printf("a=%d\n",a);
      return 0;
}