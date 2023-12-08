#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    cout<<"Enter two values"<<endl;
    cin>>a>>b;
    try{
        if(b==0)
        {
            throw b;
        }
        c=a/b;
    }
    catch(float e)
          {
            cout<<"Divide by zero error "<<e<<endl;
          }
  
    cout<<"result="<<c<<endl;
    return 0;
}