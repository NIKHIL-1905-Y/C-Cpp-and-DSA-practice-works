#include <iostream>
using namespace std;

class Addition
{
    public :
    int x;
    int y;
    
    int add()
    {
        return x+y;
    }


};
int main()
{
    Addition a;
    cout<<"ENter two Numbers "<<endl;

    cin>>a.x>>a.y;
    int z=a.add();

    cout<<"Addition of "<<a.x<<" And "<<a.y<<" is = "<<z;


}