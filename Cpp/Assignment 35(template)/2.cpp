//2. Write a C++ Program to find Largest among two numbers using function template.
#include <iostream>
using namespace std;

class Maximum
{
    public:
    template<class T>

    T max(T a,T b)
    {
        return a>b? a:b;
    }

};
int main()
{
    Maximum m;
    float x,y;
    cout<<"Enter the numbers to be compared"<<endl;
    cin>>x>>y;
    float z=m.max<float>(x,y);
    cout<<"The maximum of two numbers is ="<<z<<endl;
    return 0;
}