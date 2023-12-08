#include <stdio.h>
int main()
{
    int a[2][2]={1,2,3,4};
    int b[2][2]={1,-1,2,3};
      int i,j,k;
      int mul[2][2];
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            int sum=0;
            for(k=0;k<2;k++)
            {
                sum=a[i][k]*b[k][j]+sum;
                
            }
            mul[i][j]=sum;
        }
        
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}