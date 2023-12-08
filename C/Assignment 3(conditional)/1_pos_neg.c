//Write a program to check whether a given number is positive or non positive
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number to be checked\n");
    scanf("%d",&num);
    if(num>0)
    {
        printf("the number is positive ");
    }
    else{
        printf("the number is non positive ");
    }
}