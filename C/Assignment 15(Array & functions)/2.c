//2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include <stdio.h>
int Min(int a[],int n)
{
    int min=a[0];
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i] < min)
        {
            min=a[i];
        }
    }
    return min;
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
int c=Min(arr,5);
printf("%d is the Smallest number in array ",c);

}