#include<stdio.h>
#include<math.h>
int main()
{
  int bag[10],i,sum=0,n,count=0;
  for(i=0;i<10;i++)
  {
    if(i<9)
    {
      bag[i]=pow(2,i);
      sum=sum+bag[i];
    }
    if(i==9)
    {
      bag[i]=1000-sum;
    }
    
  }
  for(i=0;i<10;i++)
  {
  printf("%d\n",bag[i]);
  }

  printf("Enter number of coins:\n");
  scanf("%d",&n);
  for(i=0;i<8;i++)
  {
    if((bag[i]<=n)&&(bag[i+1]>=n))
    {
    
      n=n%bag[i];
      count++;
      
    }
   
  }

 printf("%d\n",count);

}
