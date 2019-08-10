#include<stdio.h>
int main()
{
    int size,i,j,count;
    printf("Enter size:\n");
    scanf("%d",&size);
    int a[size];
    int freq[size];
    printf("Enter array elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
        freq[i]=-1;
    }
    for(i=0;i<size;i++)
    {
        count=1;

        for(j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                freq[j]=0;
            }

        }
        if(freq[i]!=0)
        {
            freq[i]=count;

        }
    
       }
       printf("\n Frequency of all elements of array:\n ");
       for(i=0;i<size;i++)
       {
           if(freq[i]!=0)
           {
               printf("%d occurs %d times\n",a[i],freq[i]);

           }
       }

   
}