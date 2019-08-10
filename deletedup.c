#include<stdio.h>
int main()
{
    int size,i,j,res;
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

               res=res-1;    
                   
            }
        }
    }
    printf("After deleting duplicates:\n");
    for(i=0;i<=res;i++)
    {
        printf("%d\t",a[i]);
    }
}