//14.	Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number \n");
    scanf("%d",&num);
    if(num%7==0)
    {
        printf("the number is divisble by 7");
    }
    else if(num%3==0)
    {
        printf("the number is divisble by 3");

    }
    else{
        printf("the number is neither divisble by 7 or 3");
    }
    return 0;
    


}