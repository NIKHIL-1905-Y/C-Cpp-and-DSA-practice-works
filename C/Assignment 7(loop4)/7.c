//7. Write a program to print all Prime numbers between two given numbers
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the numbers between prime numbers to calculated\n");
    scanf("%d %d",&a,&b);

    int i,N,flag;
    for(N=a;N<=b;N++)
    {
        flag=0;
        for(i=2;i<=N/2;i++)
        {
        if(N%i==0)
        {
            flag++;
            break;
        }

    }
    if(flag==0 && N!=1)
    {
        printf(" %d ",N);
    }
    }
    return 0;
}