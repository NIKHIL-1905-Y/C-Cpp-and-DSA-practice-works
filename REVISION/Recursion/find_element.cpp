#include <iostream>
using namespace std;
bool is_find(int a[],int size,int element)
{
    if(size==0)
    {
        return false;
    }
    if(a[0]==element)
    {
        return true;
    }
    
    return is_find(a+1,size-1,element);
    
}

int main()
{
    int a[100];
    int n,k;
    cout<<"Enter the size of Array"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be searched"<<endl;
    cin>>k;
    int result =is_find(a,n,k);
    if(result==1)
    {
        cout<<"The element is present in the array"<<endl;
    }
    else
    {
        cout<<"The element is not present in the array"<<endl;
    }
    return 0;

}