#include <iostream>
using namespace std;

class Addition 
{
    public :
    int x,y;
    Addition()
    {

    }
    Addition(int a,int b)
    {
        x=a;
        y=b;
    }
    Addition(int a)
    {
        x=a;
    }

    int add()
    {
        return x+y;
    }


};
int main()
{
    Addition a;
    Addition b=Addition(4,5);
    Addition c=Addition(2);
    Addition d;
    d.x=20;
    d.y=40;
    int k=d.add();
    cout<<d.x<<" "<<d.y<<" "<<k<<endl;

    int x=a.add();
    int y=b.add();
    int z=c.add();
    cout<<x<<" "<<y<<" "<<z;
    return 0;
}