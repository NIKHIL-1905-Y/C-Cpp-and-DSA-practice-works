#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number \n");
    scanf("%d",&x);
    if(x&1==1)
    {
        printf("the number is odd");
    }
    else 
    {
        printf("the number is even");
    }
}