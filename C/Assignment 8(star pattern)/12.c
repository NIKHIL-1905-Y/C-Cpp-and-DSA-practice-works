#include <stdio.h>
int main()
{
    int i;
    char c='A';
    for(i=0;i<=3;i++)
    {
        c='A';
        for(int j=0;j<=6;j++)
        {
            if(j<i||j>6-i)
            {
                printf(" ");
            }
            else
            {
                printf("%c",c);
                
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

