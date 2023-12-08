#include <iostream>
using namespace std;

class A
{
    int x,y,z;
    public:

    A()
    {

    }
    A(int x,int y,int z)
    {
       this-> x=x;//(*this).x=x
        this->y=y;//(*this).x=x
       this-> z=z;//(*this).x=x

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