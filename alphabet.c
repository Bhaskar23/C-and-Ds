#include<stdio.h>
int main()
{
    char x;
    printf("Enter alphabet:");
    scanf("%c",&x);
    switch(x)
    {
        case 'a':
        {
            printf("It is vowel\n");
            break;
        }
         case 'e':
        {
            printf("It is vowel\n");
            break;
        }
         case 'i':
        {
            printf("It is vowel\n");
            break;
        }
         case 'o':
        {
            printf("It is vowel\n");
            break;
        }
         case 'u':
        {
            printf("It is vowel\n");
            break;
        }
        default:
        {
            printf("Entered alphabet is consonant\n");
        }
    }
   
}