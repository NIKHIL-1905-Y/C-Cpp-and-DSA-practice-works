#include <iostream>
using namespace std;

class Addition
{
     int x,y;
    public:
    void setX(int a)
    {
        if(a<0)
        {
            x=-a;
        }
        else{
            x=a;

        }

    }
    void setY(int b)
    {
       y=b;

    }

    int getX(int a)
    {
        return x;

    }
    int getY(int b)
    {
        return y;

    }
   
   


};
int main()
{
    Addition a;
    a.setX(-5);
    a.setY(100);
    cout<<a.getX() + a.getY()<<endl;
    return 0;

   
}