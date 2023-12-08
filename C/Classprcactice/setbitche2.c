#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number to be checked whether last two bits are set or not\n");
    scanf("%d",&x);
    if(x&3==x)
    {
        printf("the last two bits of number is set ");

 
    }
    else{
        printf("the number is not set");
    }
}