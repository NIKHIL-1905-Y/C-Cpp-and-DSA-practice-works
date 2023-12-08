#include <iostream>
using namespace std;
int sum(int a[],int size)
{
    if(size==0)
    {
        return 0;
    }
    
    return a[0] + sum(a+1,size-1);
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
    cout<<"The sum of array is "<<sum(a,n)<<endl;

}