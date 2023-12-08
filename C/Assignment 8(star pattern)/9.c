#include <stdio.h>
int main()
{
    int i, c;
    for(i=0;i<=3;i++)
    {
        c=1;
        for(int j=0;j<=6;j++)
        {
            if(j<i||j>6-i)
            {
                printf(" ");
            }
            else
            {
                printf("%d",c);
                
                  if(j<3)
                  {
                    c++;
                  }
                  else{
                    c--;
                  }
            }
          
            
                
                
                
            }
           

            
            printf("\n");
          

        }
        
    }

