//1. Write a function to find the greatest number from the given array of any size. (TSRS)//

#include <stdio.h>
int Max(int a[],int n)
{
    int max=a[0];
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int main()
{
    int arr[10];

   int i,size;
    printf("Enter the size of Array\n");
    
    scanf("%d",&size);
 printf("Enter the values of array\n");
 for(i=0;i<size;i++)
 {
     scanf("%d",&arr[i]);
 }
int c=Max(arr,5);
printf("%d is the greatest number in array ",c);
return 0;

}