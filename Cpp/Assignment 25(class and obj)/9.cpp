//9. Define a class Circle and define an instance member function to find the area of the 
//circle.
#include <iostream>
using namespace std;

class Circle
{
    public:
    int r;
    Circle(int x)
    {

        r=x;
    }
    float area()
    {
        return 3.14*r*r;
    }

};
int main()
{
    Circle c1(4);
    float x= c1.area();
    cout<<"The area is "<<x<<endl;
return 0;

}