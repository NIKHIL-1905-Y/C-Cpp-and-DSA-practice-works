//1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
//array values from the user
#include <stdio.h>
int main()
{
    int a[10],i;
    int sum=0;
    
    printf("Enter the elements of Array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);

    }


    for(i=0;i<10;i++)
    {
        sum= sum+a[i];
    }
    printf(" the sum is %d",sum);
    return 0;
}