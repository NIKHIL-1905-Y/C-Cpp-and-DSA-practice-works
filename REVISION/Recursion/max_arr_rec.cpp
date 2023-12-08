#include<iostream>
using namespace std;

int max(int a[],int size)
{
    if(size==1)
    {
        return a[0];
    }
int maxRest = max(a+1,size-1);

if(a[0]>maxRest)
{
    return a[0];
}
else
{
    return maxRest;
}
}

int main()
{
     int a[100];
    int n;
    cout<<"Enter the size of Array"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The maximum element is "<<max(a,n)<<endl;

}