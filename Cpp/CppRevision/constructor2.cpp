#include <iostream>
using namespace std;

class Addition
{
    public:
    int x,y;
    Addition(int a,int b)
    {
        x=a;
        y=b;
        cout<<"Parametrized constructor called"<<endl;
    }
    Addition()
    {
        cout<<"Default constructor called"<<endl;

    }
    Addition(int a)
    {
        x = y = a;
    }

    int add()
    {
        return x+y;
    }
};

int main()
{
    int x,y;
    cout<<"Enter the values"<<endl;
    cin>>x>>y;
    Addition *a=new Addition(x,y);
    Addition c;
    Addition d(9,10);
    Addition e(5);

    int z=a->add();
    int k=d.add();
    cout<<"Addition of "<<a->x<<" and "<<a->y<<" is "<<z<<endl;
    cout<<"Addition of "<<d.x<<" and "<<d.y<<" is "<<k<<endl;
    cout<<"Addition of single parameter constructor "<<e.add()<<endl;

}