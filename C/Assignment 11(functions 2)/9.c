//9. Write a program in C to find the square of any number using the function.
#include <stdio.h>
int sqr(int n)
{
    int sq=n*n;
    return sq;

}
int main()
{
    int n;
    printf("Enter the number whose square is to be calculated\n");
    scanf("%d",&n);
    int ans=sqr(n);
    printf("THe square of  %d is %d",n,ans);
    return 0;

}