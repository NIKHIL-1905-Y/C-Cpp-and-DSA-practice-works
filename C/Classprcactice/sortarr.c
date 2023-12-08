#include <stdio.h>
int main()
{
    int a[5],temp=0;
    int i;
    printf("Enter the elements to be sorted\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    
    }
    printf("this is the sorted array\n");
    for(i=0;i<5;i++)
    {
        printf(" %d ",a[i]);
    }
    
    return 0;
}