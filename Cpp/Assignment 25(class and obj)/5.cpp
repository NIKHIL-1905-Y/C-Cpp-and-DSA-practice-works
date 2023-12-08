//5. Define a class ReverseNumber and define an instance member function to find Reverse 
//of a Number using class.

#include <iostream>
using namespace std;

class ReverseNumber
{
    public:
    int num;
    ReverseNumber(int x)
    {
        num=x;
    }
    ReverseNumber()
    {

    }
    void reverse()
    {
        int rem,reverse,n1;
        n1=num;
        
       while(n1!=0)
       {
        rem = n1%10;
        reverse=reverse*10 + rem;
        n1=n1/10;
        
       }

       cout<<"The reverse of  "<<num<<" is "<<reverse<<endl;
    }

};

int main()
{
    
     ReverseNumber rn(456);
    
    rn.reverse();
return 0;
}