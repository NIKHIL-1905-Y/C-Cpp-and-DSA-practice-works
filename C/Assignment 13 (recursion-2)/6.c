//6. Write a recursive function to calculate factorial of a given number
#include <stdio.h>
int fact(int n)
{
    if(n==1)
    {
        
         return 1;
        
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);

    int ans=fact(n);
    printf("%d is the factorial of %d",ans,n);
}