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
    int x=m.max<int>(2,4);
    cout<<x<<endl;
    return 0;
}