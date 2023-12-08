#include <iostream>
using namespace std;
void Merge(int *a,int start,int end,int mid)
{
    int i,j,k,temp[end-start+1];
    i=start;     //!st array
    k=0;
    j=mid+1;     //2nd Array
    while(i<=mid && j<=end)
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=a[j];
            k++;
            j++;

        }
    }
    while(i<=mid)
    {
        temp[k]=a[i];
        k++;
        i++;
        
    }
    while(j<=end)
    {
        temp[k]=a[j];
        k++;
        j++;
    }
    for(i=start;i<=end;i++,k++)
    {
        a[i]=temp[k];
    }

}
void MergeSort(int *a,int start,int end)
{
    int mid;
    if(start<end)
    {
        mid=start+end/2;
        MergeSort(a,end,mid);
        MergeSort(a,mid+1,end);
        Merge(a,start,end,mid);

    }
}

int main()
{
    int n=7,i;
    int arr[]={32,27,43,3,9,82,10};
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    MergeSort(arr,0,n-1);
    cout<<"Sorted Data"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    
}