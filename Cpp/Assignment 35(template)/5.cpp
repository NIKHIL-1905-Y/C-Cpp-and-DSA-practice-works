//5. Write a C++ Program to Add two numbers using function template.

#include <iostream>
using namespace std;


class Addition
{
    public :
    template <class T>

    T add(T a,T b)
    {
        return a+b;
    }
};
int main()
{
    Addition a;
    int x,y;
    cout<<"Enter the number to be added"<<endl;
    cin>>x>>y;
    int sum=a.add<int>(x,y);
    cout<<"The sum is "<<sum<<endl;
    return 0;
}
