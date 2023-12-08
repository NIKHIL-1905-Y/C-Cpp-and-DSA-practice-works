//10. Define a class Area and define instance member functions to find the area of the 
//different shapes like square, rectangle , circle etc
#include <iostream>
using namespace std;

class Area
{
    public:
    int l,b,r,a;
    Area(int x)
    {
        r = a =x;
    }
    Area(int x,int y)
    {
        l=x;
        b=y;
    }
    int square()
    {
        return a*a;
    }
    int rectangle()
    {
        return l*b;
    }
    float circle()
    {
        return 3.14*r*r;
    }
    
};
int main()
{
    Area a1(4,5),a2(6);
    int x=a1.rectangle();
    int y=a2.circle();
    int z=a2.square();
    cout<<"The area of rectancle is "<< x <<"\n The area of circle is "<<y<<" \n The area of Square is "<<z<<endl;
    return 0;
}