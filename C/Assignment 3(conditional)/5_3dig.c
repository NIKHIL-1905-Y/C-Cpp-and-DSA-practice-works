//5. Write a program to check whether a given number is a three digit number or not.

#include <stdio.h>
int main()
{
    int s;
    printf("Enter the number \n");
    scanf("%d",&s);


    if(s>99&&s<=999)
    {
        printf("the number is three digit ");
    }
    else{
        printf("the number is not three digit ");
    }
}