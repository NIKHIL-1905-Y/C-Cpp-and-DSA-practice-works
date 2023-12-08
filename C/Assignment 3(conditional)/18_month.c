#include <stdio.h>
int main()
{
    int mo;
    printf("Enter the month number \n");
    scanf("%d",&mo);
    if((mo==1)||(mo==3)||(mo==5)||(mo==7)||(mo==8)||(mo==10)||(mo==12))
    {
        printf("the month has 31 days\n");

    }
    else if(mo==2)
    {
        printf("the month has 29/28 days ");
    }
    else 
    {
        printf("the month has 30 days ");
    }
}