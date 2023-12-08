//3. Write a program to calculate the sum of all even numbers and sum of all odd
//numbers, which are stored in an array of size 10. Take array values from the user
#include <stdio.h>
int main()
{
    int a[10],i,n;
    int sumod=0;
    int sumevn=0;
    printf("Enter the size of Array\n");
    scanf("%d",&n);
    printf("Enter the elements of Array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }


    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sumevn= sumevn+a[i];
        }
        else
        {
            sumod=sumod+a[i];
        }
       
    }
        
    printf("the sum of even numbers is %d \n the sum of odd numbers is %d ",sumevn,sumod);
    return 0;
}