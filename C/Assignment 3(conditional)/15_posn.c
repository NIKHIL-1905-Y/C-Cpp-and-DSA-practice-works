//15.	Write a program to check whether a given number is positive, negative or zero.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("%d is positive",n);
    }
    else if(n<0)
    {
        printf("%d is negative",n);
    }
    else
    {
        printf("the number  is zero");
    }
}