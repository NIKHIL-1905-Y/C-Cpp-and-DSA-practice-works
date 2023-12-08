#include <stdio.h>
int main()
{
    int arr[10][10];
    int m,n;
    printf("Enter the order of square matrix\n");
    scanf("%d %d",&m,&n);
    int max=m-1;
    
    printf("Enter the array elements\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum_r=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
             if(i==j)
             {
                sum_r=sum_r+arr[i][j];
             }

        }
    }
    printf("The sum of right diagonal is %d \n",sum_r);
    int sum_l=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i+j==max)
            {
                sum_l=sum_l+arr[i][j];
            }

            
        }
        
    }
    printf("The sum of left diagonal elements is %d ",sum_l);

return 0;


}