//6. Write a program to sort elements of an array of size 10. Take array values from the
//user.
#include <stdio.h>
int main()
{
    int a[10],i,j,n,temp=0;
    float avg;
    int sum=0;
    printf("Enter the size of Array\n");
    scanf("%d",&n);
    printf("Enter the elements of Array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                
            }
        }
    }
    printf("The sorted array is");
        
    for(i=0;i<n;i++)
        {
            printf("  %d ",a[i]);
        }
        return 0;





}