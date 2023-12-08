//4. Define a function to print Pascal Triangle up to N lines.
#include <iostream>
using namespace std;
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
         f=i*f;
    }
    return f;
}
int nCr(int n ,int r)
{
    int div=(fact(n-r))*(fact(r));
    int ncr=(fact(n))/div;
    return ncr;

}

void pascal(int n)
{
    int x;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
              x=nCr(i,j);
              cout<<x<<" ";

        }
      cout<<endl;
    }

}
int main()
{
    int n;
    cout<<"Enter the number of lines upto which u want to print Pascal Triangle"<<endl;
    cin>>n;
    pascal(n);
    return 0;
}