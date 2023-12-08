#include <iostream>
using namespace std;

template<class T1,class T2,class T3>
class Addition
{
    public:
    T3 add(T1 a,T2 b)
    {
        return a+b;
    }

};
int main()
{
    Addition <int ,float,float> a;
    float x=a.add(3.5,6.8);
    cout<<x;

}