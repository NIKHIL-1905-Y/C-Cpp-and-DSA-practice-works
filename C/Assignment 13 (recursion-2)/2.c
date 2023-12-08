//2. Write a recursive function to calculate sum of first N odd natural numbers
#include <stdio.h>
int  sumod(int n)
{
     if(n==1)
    {
        return 1;
    }
    return 2*n-1 +sumod(n-1);

    
   
}
int main()
{
    int n;
    printf("Enter the numbers upto which sum has to be printed\n");
    scanf("%d",&n);
    int m=sumod(n);
    printf("The sum of  %d  odd natural numbers is  %d",n,m);
    return 0;
}