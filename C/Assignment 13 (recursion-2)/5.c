//5. Write a recursive function to calculate sum of digits of a given number
#include <stdio.h>

int digsum(int num)
{
    if(num==0)
    {
        return 0;
    }
    return num%10 + digsum(num/10);
}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int m=digsum(n);
    printf("The sum of %d   is  %d",n,m);
    return 0;
}