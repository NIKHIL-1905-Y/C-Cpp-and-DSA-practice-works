//7. Write a program in C to print or display the upper triangular of a given matrix.

#include <stdio.h>
int main()
{
    int a[10][10];
    int m,n,i,j;
    printf("Enter the order of Square Matrix\n");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of Matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            
        }
    }
    printf("The  upper triangular Matrix is \n");
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<=j)
            {
                
            printf(" %d ",a[i][j]);
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