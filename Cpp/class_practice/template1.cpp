#include <iostream>
using namespace std;

//Template
template<class T>
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
    Addition <int>a;
    int x=a.add(3.3,4);
    cout<<"Addition Result = "<<x<<endl;

    
    Addition <float>b;
    float z=b.add(4.5,4);
    cout<<"Addition Result = "<<z<<endl;


    return 0;
}