//4.
//Write a program to check whether a given number is an even number or an odd
//number without using % operator.
#include <stdio.h>
int main()
{
    int num;
    printf("enter the number ");
    scanf("%d",&num);

    if(num&1==1)
    {
        printf("the number is odd");

    }
    else{
        printf("the number is even");
    }
}
