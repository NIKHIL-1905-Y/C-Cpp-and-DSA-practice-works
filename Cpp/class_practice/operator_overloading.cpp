#include <iostream>
using namespace std;

class Time
{
    int hour,min;
    public:
    Time()
    {


    }

    Time(int h,int m)
    {
        hour=h;
        min=m;

    }

    void display()
    {
        cout<<" Hour= "<<hour<<" Min = "<<min<<endl;

    }
    friend Time operator+ (int a,Time t)
    {
        Time temp;
        temp.hour = a + t.hour;
        temp.min = t.min;
        return temp;
    }
};
int main()
{
    Time t1(5,34), t2;
    t2 = 3+ t1;
    t2.display();
    return 0;

    
}