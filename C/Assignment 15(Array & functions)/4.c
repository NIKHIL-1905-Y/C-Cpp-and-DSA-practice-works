// 4. Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include <stdio.h>
void RightRotate(int a[],int size,int pos)
{
    int i,j,x;
    for(i=1;i<=pos;i++)
    {
        int x=a[size-1];
        for(j=size-1;j>=0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=x;
    }
    printf("\n");
    for(i=0;i<size;i++)
    {
        printf(" %d ",a[i]);
    }


}
void LeftRotate(int a[],int size,int pos)
{
    int i,j,x;
     
    
    for(i=0;i<pos;i++)
    {
        int x=a[0];
        for(j=0;j<size-1;j++)
        {
            a[j]=a[j+1];
            
        }
        a[j]=x;
    }
    printf("\n");
    for(i=0;i<size;i++)
    {
        printf(" %d ",a[i]);
    }


}
int main()
{
    int n,i,size;

    int d;
    // printf("Enter the size of Array\n");
    // scanf("%d",&size);
       int a[]={32,29,40,12,70};
//    printf("ENter the elements of Array\n");
   
//    for(i=0;i<size;i++)
//    {
//     scanf("%d",&a[i]);
//    }
    printf(("Enter the no. of times array to be rotated\n "));
    scanf("%d",&n);
    //printf("Enter the direction \n");
    printf("Enter 1 for right rotate and 0 for left rotate\n");
   scanf("%d",&d);
   if(d==0)
   {
        LeftRotate(a,5,n);
   }
   if(d==1)
   {

     RightRotate(a,5,n);
    }
   
    return 0;
}