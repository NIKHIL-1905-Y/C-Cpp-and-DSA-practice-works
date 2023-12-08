#include <stdio.h>
int main()
{
    int arr[10][10];
    int m,n;
    printf("Enter the order of square matrix\n");
    scanf("%d %d",&m,&n);
    
    printf("Enter the array elements\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int trans[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
             trans[i][j]= arr[j][i];



        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {

            printf(" %d",trans[i][j]);
        }
        printf("\n");
    }

return 0;


}