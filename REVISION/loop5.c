#include <stdio.h>
int main()
{
    int n=5;
    
    for(int i=1;i<=n;i++)
    {
        int count =i;
        for(int j=1;j<n;j++)
        {
            if(j<=n-i)
            { 
                printf(" ");
 
            }
            else{
                printf("%d",count);
                count--;
            } 
           

        }
        for(int j=1;j<=i;j++){
             
            printf("%d",count);
            count++;
        }
        printf("\n");
    }
}