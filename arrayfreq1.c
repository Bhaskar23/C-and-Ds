#include<stdio.h>
int main()
{
    int size,i,j,res,count=1;
    printf("Enter size:\n");
    scanf("%d",&size);
    res=size;
    int a[size];
    printf("Enter array elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                while(j<size)
                {
                    a[j]=a[j+1];
                    j++;
                }
                count++;

               res=res-1;    
                   
            }
            if(count==1)
            {
                printf("%d is 1 time\n",a[i]);
            }
            else
            {
               printf("%d is %d times\n",a[i],count);
            }
        }
    }
    printf("After deleting duplicates:\n");
    for(i=0;i<=res;i++)
    {
        printf("%d\t",a[i]);
    }
}