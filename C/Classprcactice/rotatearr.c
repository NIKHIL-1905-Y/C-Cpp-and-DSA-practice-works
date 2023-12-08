#include <stdio.h>
int main()
{
    int a[10],i,j,n,d;
    
    printf("Enter the size of Array\n");
    scanf("%d",&n);
    printf("Enter the elements of Array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    
    printf("Enter the distance how many times to right rotate\n");
    scanf("%d",&d);
    for(j=1;j<=d;j++)
    {
        int x=a[n-1];
        for(i=n-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=x;

    }
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }


    
      
    return 0;



}