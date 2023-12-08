//1. Write a program to calculate the sum of two matrices each of order 3x3.
#include <stdio.h>
int main()
{
    int i,j;
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={1,2,3,4,5,6,7,8,9};
    int s[3][3];
    // printf("Enter the elements of 1st Matrix\n");
     //for(i=0;i<3;i++)
     //{
    //     for(j=0;j<3;j++)
    //     {
    //         scanf("%d",&a[i][j]);
    //     }
    // }
    // printf("Enter the elements of 2nd Matrix\n");
    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         scanf("%d",&a[i][j]);
    //     }
    // }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }

    
}