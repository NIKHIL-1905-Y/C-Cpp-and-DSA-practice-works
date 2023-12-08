//2. Write a recursive function to print first N natural numbers in reverse order
#include <stdio.h>
void print(int n)
{
    if(n>=1)
    {
        
    printf(" %d ",n);
    print(n-1);
    }
}
int main()
{
    int n;
    printf("Enter the numbers upto which we have to print the reverse order\n");
    scanf("%d",&n);
    print(n);
}