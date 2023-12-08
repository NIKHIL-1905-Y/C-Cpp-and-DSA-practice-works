//4. Define a class LargestNumber and define an instance member function to find the 
//Largest of three Numbers using the class.

#include <iostream>
using namespace std;

class LargestNumber
{
    public:
    int n1,n2,n3;

    LargestNumber(int x,int y,int z)
    {
        n1=x;
        n2=y;
        n3=z;
    }

    int Largest()
    {
        if(n1>=n2 && n1>=n3)
        {
            return n1;
        }
        else if(n2>=n1 && n2>=n3)
        {
            return n2;
        }
        else
        {
            return n3;
        }
    }

};

int main()
{
    LargestNumber l1(4,5,6);

    int x=l1.Largest();
    cout<<"The largest number is "<<x<<endl;
    return 0;
}