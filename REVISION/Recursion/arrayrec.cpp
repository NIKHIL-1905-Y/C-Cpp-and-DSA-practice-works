#include <iostream>
using namespace std;
bool is_sorted(int a[],int size)
{
    if(size==0|| size==1){
        return true;
    }
    if(a[0]>a[1])
    {
        return false;
    }
    bool isSmallerSorted = is_sorted(a+1,size-1);
    return isSmallerSorted;
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
    bool ans1 = is_sorted(a,6);
    if(ans1==1)
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    return 0;

}