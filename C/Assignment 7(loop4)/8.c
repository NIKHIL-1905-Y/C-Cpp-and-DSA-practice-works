//8. Write a program to find next Prime number of a given number
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the numbers\n");
    scanf("%d",&a);

    int i,N,flag;
    for(N=a;N<=100;N++)
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
        printf(" the next prime number is %d ",N);
        break;
    }
    }
    return 0;
}