//6. Write a function in C to read n number of values in an array and display it in reverse
//order.
#include <stdio.h>
void Reverse(int a[],int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        printf(" %d ",a[i]);

    }

}
int main()
{
    int arr[10],n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The reversed array is \n");
     Reverse(arr,n);
    return 0;

}