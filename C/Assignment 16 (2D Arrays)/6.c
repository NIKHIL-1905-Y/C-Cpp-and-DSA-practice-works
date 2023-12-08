//6. Write a program in C to find the sum of rows and columns of a Matrix.
#include <stdio.h>
int main()
{
    int arr[10][10];
    int m,n,sum;
    printf("Enter the order of matrix\n");
    scanf("%d %d",&m,&n);
    
    printf("Enter the array elements\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<m;j++)
        {
            sum=arr[i][j]+sum;

        }
        printf("THE SUM of ROW %d=%d\n",i+1,sum);

    }
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<m;j++)
        {

            sum=arr[j][i]+sum;
        }
        printf("THE SUM of COLOUMN %d =%d\n",i+1,sum);
    }

return 0;


}