//10. Write a function in C to count the frequency of each element of an array
#include <stdio.h>
void Frequency(int a[],int n)
{
    int h[100]={0};
    int i;
    for(i=0;i<n;i++)
    {
        h[a[i]]++;
    }
    
   
        for(i=0;i<n;i++)
        {
     if(h[i]!=0)
       {
        printf(" The frequency of %d is %d \n",i,h[i]);
        
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
   
     Frequency(arr,n);
    return 0;

}

