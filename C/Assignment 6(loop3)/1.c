
//1. Write a program to calculate sum of first N natural numbers

#include <stdio.h>
int main()
{
    int n,sum;
    printf("Enter the number upto which sum is to be printed\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
        

    }
    printf("the sum of natural numbers upto %d is %d",n,sum);
    return 0;

}