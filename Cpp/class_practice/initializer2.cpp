#include <iostream>
using namespace std;

class A
{
    int x,y,z;
    public:

    A()
    {

    }
    A(int a,int b,int c): x(a), y(b) , z(c)
    {
       cout<<"Parameterized constructor called"<<endl;

    }
    void display()
    {
        cout<<" x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
    }

};
int main()
{
    A a(2,3,4);
    
    a.display();
    return 0;

}