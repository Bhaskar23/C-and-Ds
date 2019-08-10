#include<stdio.h>
void reverse(int []);
int main()
{
    int a[5]={4,85,95,41,50};
    reverse(a);
}
void reverse(int a[5])
{
    int j=5;
    int i=0;
    while(i<j)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    for(i=1;i<=5;i++)
    {
        printf("%d ",a[i]);
    }
}