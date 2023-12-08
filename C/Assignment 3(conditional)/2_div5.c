//2. Write a program to check whether a given number is divisible by 5 or not

#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number \n");
    scanf("%d",&x);
    if(x%5==0)
    {
        printf("the number is divisble by 5");
    }
    else{
        printf("the number is not divisble by 5");
    }
    return 0;
}