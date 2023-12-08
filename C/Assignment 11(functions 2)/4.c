//4. Write a function to find the next prime number of a given number. (TSRS)
//4. Write a function to find the next prime number of a given number. (TSRS)
//5. Write a function to print first N prime numbers (TSRN)
//6. Write a function to print all Prime numbers between two given numbers. (TSRN

#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                printf("%d",i);
                break;
            }
        }
    }

}