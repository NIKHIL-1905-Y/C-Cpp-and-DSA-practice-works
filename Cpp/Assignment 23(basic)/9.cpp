//9. Write a C++ program to find the maximum of two numbers
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    if(a>b)
    {
        cout<<a<<" is the maximum one "<<endl;
    }
    else 
    {
        cout<<b<<" is the maximum one"<<endl;
    }
}