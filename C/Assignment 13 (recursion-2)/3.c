//2. Write a recursive function to calculate sum of first N even natural numbers
#include <stdio.h>
int  sumev(int n)
{
     if(n==0)
    {
        return 0;
    }
    return 2*n +sumev(n-1);

    
   
}
int main()
{
    int n;
    printf("Enter the numbers upto which sum has to be printed\n");
    scanf("%d",&n);
    int m=sumev(n);
    printf("The sum of  %d  even natural numbers is  %d",n,m);
    return 0;
}