#include <stdio.h>
int main()
{
    int i,j;
    for (i=0;i<=3;i++)
    {
        for(j=0;j<=5;j++)
        {
            if(i==0||j==0||i==3||j==5)
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