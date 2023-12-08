//5. Write a program to find the smallest number stored in an array of size 10. Take array
//values from the user.
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
    int min=a[0];


    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
       
    }
       
    printf("the smallest number is %d",min);
    return 0;
}