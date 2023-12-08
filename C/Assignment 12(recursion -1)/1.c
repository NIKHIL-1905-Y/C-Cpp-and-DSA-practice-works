//1. Write a recursive function to print first N natural numbers
#include <stdio.h>
void print(int n)
{
    if(n>=1)
    {
        print(n-1);
    printf(" %d ",n);
    }
}
int main()
{
    int n;
    printf("Enter the numbers upto which we have to print\n");
    scanf("%d",&n);
    print(n);
}