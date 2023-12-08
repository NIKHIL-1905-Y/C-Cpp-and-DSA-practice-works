//3. Write a function to sort an array of any size. (TSRN)
#include <stdio.h>
void Sort(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The value after Sorting is \n ");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }

}
int main()
{
    int size;int arr[10];
    printf("Enter the size of array \n");
    scanf("%d",&size);
    printf("Enter the elements of array \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    Sort(arr,size);
    return 0;


}