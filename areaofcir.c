#include<stdio.h>
#define pi 3.14
void area(int);
void circum(int);
int main()
{
    int r;
    printf("Enter radius of the circle:\n");
    scanf("%d",&r);
    area(r);
    circum(r);
    return 0;
}
void area(int r)
{
    float area;
    area=pi*(r*r);
    printf("Area=%f\n",area);
}
void circum(int r)
{
    float circum;
     circum=2*pi*r;
    printf("Circumference=%f\n",circum);
}