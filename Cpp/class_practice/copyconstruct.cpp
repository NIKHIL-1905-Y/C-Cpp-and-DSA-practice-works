#include <iostream>
using namespace std;

class ABC
{
    public:
    int x,y;
   const char *s;
    ABC()
    {

    }
    ABC(int a,int b,const char *s1)
    {
        x=a;
        y=b;
        s= s1;
    }
    void display()
    {
        cout<<"x ="<<x<<" y = "<<y<<"  s="<<s<<endl;
    }


};
int main()
{
    ABC a(2,3,"Prateek");
    ABC b=a;
    a.s="Jain";
    a.display();
    b.display();
    return 0;
}
