#include <stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i==j||(i==2 && j==4)||(i==1 && j==4)||(i==2 && j==5)||(i==3 && j==6)||(i==2 && j==7)||(i==1 && j==8)||(i==0 && j==9))
            {

            printf("*");
            }
            else 
            printf(" ");
            
        }
        printf("\n");

    }
    return 0;
}
