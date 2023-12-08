//3. Write a function to check whether a given number is Prime or not. (TSRS)
#include <stdio.h>
#include <stdbool.h>

bool checkprime(int n)
{
    int i;
    if(n==2)
    return true;
    
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return false;
        
        }

    }

    return true;
}
int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    bool z=checkprime(n);
    if(z== false)
    {
        printf("The number is not prime \n");
    }
    else
    {
        printf(("the number is prime\n"));
    }
    return 0;
}