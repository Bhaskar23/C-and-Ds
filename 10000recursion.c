#include<stdio.h>
int fun(int);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    fun(n);
   
  
}
int fun(int n)
{
    if(n==0)
      return 0;
    else
    {
       fun(n-1);
       printf("%d\n",n);
    }
     
    

}