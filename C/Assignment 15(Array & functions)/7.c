//7. Write a function in C to count a total number of duplicate elements in an array.(Means
//elements that occurs 2 times in an array)
#include <stdio.h>
void Duplicate(int a[],int n)

{
    int h[100]={0};
    int i, count =0,ans=0;
    for(i=0;i<n;i++)
    {
        h[a[i]]++;
    }
   
        for(i=0;i<n;i++)
        {
     if(h[i]==2)
       {
        count++;

       }
       
       

 }
  ans =count+ans;
  printf("The total no. of  duplicate elements are %d",ans);
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
   
     Duplicate(arr,n);
    return 0;

}