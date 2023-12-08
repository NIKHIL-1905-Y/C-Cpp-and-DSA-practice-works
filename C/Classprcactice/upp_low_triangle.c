#include <stdio.h>
int main()
{
    int a[10][10];
    int m,n,i,j;
    printf("Enter the order of Matrix\n");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of Matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i][j]);
            
        }
    }
     for(int i=0;i<m;i++)
    {
        for(int i=0;i<n;i++)
        {
            if(i<=j)
            {
                
            printf("%d ",a[i][j]);
            }
            else
            {
                printf(" 0 ");
            }
        }
        printf(" \n");
    }
   
    return 0;
    
}