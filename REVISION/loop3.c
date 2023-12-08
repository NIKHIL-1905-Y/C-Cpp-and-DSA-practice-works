#include <stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=8;i++)
    {
       if(i<=4)
       {
        for(j=0;j<=i;j++)
        {
            printf(" * ");
        }

       }
       if(i>4)
       {
        for(j=0;j<=9-i;j++)
        {
            printf(" * ");
        }
       }
       printf("\n");
    }
}