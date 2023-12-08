//2. Write a program to calculate the average of numbers stored in an array of size 10.
//Take array values from the user.
#include <stdio.h>
int main()
{
    int a[10],i,n;
    float avg;
    int sum=0;
    printf("Enter the size of Array\n");
    scanf("%d",&n);
    printf("Enter the elements of Array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }


    for(i=0;i<n;i++)
    {
        sum= sum+a[i];
       
    }
        avg=sum/n;
    printf("the average is %f",avg);
    return 0;
}