#include <iostream>
using namespace std;

class A
{
    public :
     static int x;
     int y;

};
int A::x=10; // It is necessary and very very important

int main()
{
    A a;
    a.x=5;
    a.y=10;

    cout<<a.x<<" "<<a.y<<endl;

    return 0;
}