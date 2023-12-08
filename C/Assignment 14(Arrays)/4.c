//4. Write a program to find the greatest number stored in an array of size 10. Take array
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
    int max=a[0];


    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
       
    }
       
    printf("the greatest number is %d",max);
    return 0;
}