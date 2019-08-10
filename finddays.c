#include<stdio.h>
int main()
{
    int a;
    printf("Enter day:\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        {
            printf("Monday\n");
            break;
        }
         case 2:
        {
            printf("Tuesday\n");
            break;
        }
         case 3:
        {
            printf("Wednesday\n");
            break;
        }
         case 4:
        {
            printf("Thursday\n");
            break;
        }
         case 5:
        {
            printf("friday\n");
            break;
        }
         case 6:
        {
            printf("Saturday");
            break;
        }
         case 7:
        {
            printf("Sunday");
            break;
        }
        default:
        {
            printf("Not found\n");
        }

    }
    return 0;
}