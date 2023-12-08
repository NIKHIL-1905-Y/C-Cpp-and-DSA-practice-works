//2. Write a program to calculate the product of two matrices each of order 3x3.

#include <stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9,};
    int b[3][3]={1,2,3,4,5,6,7,8,9};
      int i,j,k;
      int mul[3][3];
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            int sum=0;
            for(k=0;k<3;k++)
            {
                sum=a[i][k]*b[k][j]+sum;
                
            }
            mul[i][j]=sum;
        }
        
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}