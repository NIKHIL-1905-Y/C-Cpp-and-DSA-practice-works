//4. Write a recursive function to calculate sum of squares of first n natural numbers
#include <stdio.h>

int sumsq(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*n+sumsq(n-1);
}
int main()
{
    int n;
    printf("Enter the numbers upto which sum has to be printed\n");
    scanf("%d",&n);
    int m=sumsq(n);
    printf("The sum of squares %d  natural numbers is  %d",n,m);
    return 0;
}