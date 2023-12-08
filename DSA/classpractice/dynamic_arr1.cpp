#include <iostream>
using namespace std;
int main()
{
    int *arr=new int [10];
    cout<<"enter the 10 elements"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"The entered elements are  as follows"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }
    delete []arr;
    return 0;
}
