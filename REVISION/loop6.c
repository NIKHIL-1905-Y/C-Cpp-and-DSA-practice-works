#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=4;i++)
    {
        int count =1,c=4;
    

        for(int j=1;j<=7;j++)
        {
            if(j<i|| j>8-i)
            {
                printf(" ");
            }
            else if(j<=4)
            {
                printf("%d",count);
                count++;
            }
          
            else
            {
                c--;
                printf("%d",c);
                
            }
           
            
        }
        
        printf("\n");
    }
}