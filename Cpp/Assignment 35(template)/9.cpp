//9. Write a C++ Program to Perform Simple Addition Function Using Templates.
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
