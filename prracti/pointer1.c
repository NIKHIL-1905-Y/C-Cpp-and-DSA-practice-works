#include <stdio.h>
void reverse(int *p,int n)
{
   int i,j,temp;
    for(i=0,j=n-1;i<=j;i++,j--)
    {
        temp=p[i];
        p[i]=p[j];
         p[j]=temp;
     }
}
void Sort(int *p,int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i]>p[j])
            {
               int temp=p[i];
               p[i]=p[j];
              p[j]=temp;

            }
        }
    }
}
int main()
{
    int a[]={4,5,6,7,7,8,2,3};
    reverse(a,8);
    for(int i=0;i<8;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n");

    Sort(a,8);
    for(int i=0;i<8;i++)
    {
        printf(" %d ",a[i]);
    }
}
