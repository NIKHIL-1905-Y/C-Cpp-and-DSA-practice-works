//10. Write a program in C to find the row with maximum number of 1s
#include <stdio.h>
int main()
{
    int a[10][10]={{0,1,1,1},{1,0,0,0},{1,1,1,0},{1,1,1,1}};
    int i,j;
    // printf("Enter the order of Matrix\n");
    // scanf("%d %d",&m,&n);
    // printf("Enter the elements of Matrix\n");
    // for(int i=0;i<m;i++)
    // {
    //     for(int i=0;i<n;i++)
    //     {
    //         scanf("%d",&a[i][j]);
            
    //     }
    // }
    int max=-1;
    int x=0;
     for(int i=0;i<4;i++)
    {
        int count=0;
        
        
        
        for(int j=0;j<4;j++)
        {
            if(a[i][j]==1)
            {
                count++;
                
            }
           

            
        }
         if(count>max)
            {
                max=count;
                x =i;

            
            }
        // printf("%d is the number of 1s in row %d\n",count,i+1);
    }
    printf("Row %d has maximum number of ones\n",x);


}