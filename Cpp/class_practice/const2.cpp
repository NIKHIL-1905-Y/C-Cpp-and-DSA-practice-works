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
    }
    int add()
    {
        return x+y;
    }
};
int main()
{
    Addition * p= new Addition(4,5);
    int z= p->add();

    cout<<"Addition of  "<<p->x <<"  and "<<p->y<<" is "<<z;



}