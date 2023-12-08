//8. Define a class Rectangle and define an instance member function to find the area of the 
//rectangle

#include <iostream>
using namespace std;

class Rectangle{
    public:
    int l,b;
    Rectangle(int x,int y)
    {
        l=x;
        b=y;
    }
    int area()
    {
        return l*b;
        
   }

};
int main()
{
    Rectangle r1(4,5);
    int x=r1.area();
    cout<<"The area is "<<x<<endl;

}