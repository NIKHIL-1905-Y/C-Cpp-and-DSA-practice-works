#include <stdio.h>
int main()
{
    int a[10][10];
    int m,n,i,j,count=0;
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
            if(a[i][j]==0)
            {
                count++;
            }
            
        }
    }
    if(count>(m*n)/2)
    {
        printf("Sparse Matrix");
    }
    else{
        printf("dense Matrix");
    }
    return 0;
    
}