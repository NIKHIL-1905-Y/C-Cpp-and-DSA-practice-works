#include <stdio.h>
int main()
{
    int a[3][3]={1,2,3,2,1,-1,4,5,2};
    int b[3][3]={3,1,4,2,0,6,-1,2,4};
      int i,j;
      int sum[3][3];
    
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
        
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}