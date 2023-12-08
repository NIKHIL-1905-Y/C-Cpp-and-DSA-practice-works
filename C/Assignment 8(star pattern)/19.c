#include <stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=18;j++)
        {
            if(j<=1-i||(j>=7+i)&&(j<12-i)||j>16+i)
            {
                printf(" ");
                 

            }
            else
            {
        
           printf("*");

            }


        }
        printf("\n");
    }
    for(i=0;i<=8;i++)
    {
        for(j=0;j<=18;j++)
        {
            if(j>i&&j<18-i)
           { 
            printf("*");
        }
        else{
            printf(" ");
        }
        }
    
    printf("\n");
    }
}