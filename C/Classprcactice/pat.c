#include <stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=6;j++)
        {
            if(j>=3-i&&j<=3+i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
    
