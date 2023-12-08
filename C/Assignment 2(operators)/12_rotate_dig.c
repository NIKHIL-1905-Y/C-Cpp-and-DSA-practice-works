//Write a program to take a three digit number from the user and rotate its digits by
//one position towards the right

#include <stdio.h>

int main()
{
    int x;
    printf("Enter the three digit number \n");
    scanf("%d",&x);
    x=(x%10)*100+x/10;
    printf("%d",x);
    return 0;
}