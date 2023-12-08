//5. Write a program to calculate sum of cubes of first N natural numbers
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number upto which sum is to be printed\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=i*i*i+sum;

    }
    printf("the sum of cubes of   natural numbers upto %d is %d",n,sum);
    return 0;

}