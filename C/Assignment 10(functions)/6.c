//6. Write a function to calculate the factorial of a number. (TSRS)
#include <stdio.h>
int fact(int);
int main()
{
    int n,st;
    printf("Enter the value for which factorial is to be calculated\n");
    scanf("%d",&n);
    st=fact(n);
    printf("The factorial of %d is %d",n,st);
    return 0;


}
int fact(int num)
{
    int i,f=1;
    for(i=1;i<=num;i++)
    {
        f=i*f;
    }
    return f;


}
