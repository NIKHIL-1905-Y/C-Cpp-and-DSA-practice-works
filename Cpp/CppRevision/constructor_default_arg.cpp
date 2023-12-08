#include <iostream>
using namespace std;

class Addition
{
    public :
    int x,y;
    //three in one constructor Defualt argument

    Addition(int a=0,int b=0)
    {
        x=a;
        y=b;
        cout<<"Three in one chalega"<<endl;
    }
    int add()
    {
        return x+y;
    }




};


int main()
{
    int a,b;
    cout<<"Enter the numbers"<<endl;
    cin>>a>>b;
    Addition *k = new Addition(a,b);
    Addition l(5);
    Addition c(4,6);
      cout<<"Sum of "<<k->x<<" and "<<k->y<<" is "<<k->add()<<endl;//Addition using DMA
      cout<<"Sum of b object is "<<l.add()<<endl;//Addition by passing single parameter in default argument constructor
      cout<<"Sum of "<<c.x<<" and "<<c.y<<" is "<<c.add()<<endl;//Addition by passing double parameter in default argument constructor
  
}