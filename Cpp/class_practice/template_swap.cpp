#include <iostream>
using namespace std;



class Swapp
{
    public:
    template<class T>

    void swap(T a,T b)
    {
       int temp=a;
        a=b;
        b=temp;
        cout<<"Value after swapping is "<<"a = "<<a<<" "<<"b = "<<b<<endl;
    }


};
int main()
{
    Swapp w;
    w.swap<int>(4,5);
    w.swap<char>('j','k');

}