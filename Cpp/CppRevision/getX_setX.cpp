#include <iostream>
using namespace std;

class Addition
{
    int x,y;

    public:
    
    void setX(int a)
    {
        if(a<0||a>100)
        {
            x=-a;
        }
        else
        {
            x=a;
        }

    }
    void setY(int b)
    {
        y = b;
    }

    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }

};
int main()
{
    Addition a;
    a.setX(-23);
    a.setY(-23);
    cout<<a.getX() + a.getY()<<endl;
}
