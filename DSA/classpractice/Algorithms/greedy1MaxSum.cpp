#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,max =0,min=0;
  cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int>a(n);
      cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        max = max + (a[i]-a[j]);
        
    }
    cout<<"THE maximum sum is "<<(-max)<<" "<<endl;
    for(int i=0,j=i+1;i<n;i=i+2,j=j+2)
    {
        min=min +(a[i]-a[j]);
    }
    cout<<"The minimum value is "<<(-min)<<endl;
}
