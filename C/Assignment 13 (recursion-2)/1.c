//1. Write a recursive function to calculate sum of first N natural numbers
#include <stdio.h>
int  sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n+sum(n-1);

}
int main()
{
    int n;
    printf("Enter the numbers upto which sum has to be printed\n");
    scanf("%d",&n);
    int m=sum(n);
    printf("The sum of %d natural numbers is  %d",n,m);
    return 0;
}