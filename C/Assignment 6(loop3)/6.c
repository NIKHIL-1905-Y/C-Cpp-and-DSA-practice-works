//6. Write a program to calculate factorial of a number
#include <stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter the number upto which fatorial of a number is to be calculated\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;

    }
    printf("the factorial upto %d is %d",n,fact);
    return 0;

}