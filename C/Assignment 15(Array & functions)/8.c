//8. Write a function in C to print all unique elements in an array.
#include <stdio.h>
void Unique(int a[],int n)

{
    int h[100]={0};
    int i;
    for(i=0;i<n;i++)
    {
        h[a[i]]++;
    }
   
        for(i=0;i<n;i++)
        {
     if(h[i]==1)
       {
        printf("%d is the unique number \n",i);

       }
 }
  
}
int main()
{
    int arr[100],n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   
     Unique(arr,n);
    return 0;

}