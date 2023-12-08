//1. Write a C++ program to demonstrate the addition of multiple types of data using generic 
//functions or templates.
#include <iostream>
using namespace std;
template <class T>

class Addition
{
    public :
    

    T add(T a,T b)
    {
        return a+b;
    }
};
int main()
{
    Addition<int> a;
    int x,y;
    cout<<"Enter the number to be added"<<endl;
    cin>>x>>y;
    int sum=a.add(x,y);
    cout<<"The sum is "<<sum<<endl;
    return 0;
}
