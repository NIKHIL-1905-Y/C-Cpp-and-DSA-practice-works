#include <iostream>
using namespace std;
class Addition
{
    public:
    int x;
    int y;
    int add()
    {
        return x+y;
    }
};
int main()
{
    Addition a;
    cout<<"enter two numbers"<<endl;
    cin>>a.x>>a.y;
    Addition b;
  cout<<"Again enter two numbers"<<endl;
  cin>>b.x>>b.y;
  int z=a.add();
  int p=b.add();
  cout<<"Addition is "<<z<<endl;
  cout<<"Addition is "<<p<<endl;


    
}
