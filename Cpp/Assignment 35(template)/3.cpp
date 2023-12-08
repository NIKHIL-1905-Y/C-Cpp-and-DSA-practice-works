//3. Write a C++ program to find the largest of three elements using a template
#include <iostream>
using namespace std;

class Maximum
{
    public:
    template<class T>
    T max(T a,T b,T c)
    {
        if(a>b && a>c)
        {
            return a;
        }
        else if(a<b && a<c)
        {
            return c;
        }
        else
        {
            return b;

        }
    }
};
int main()
{
    Maximum m;
    int x,y,z;
  
    cout<<"Enter three Numbers"<<endl;
    cin>>x>>y>>z;
    int k=m.max<int>(x,y,z);
    cout<<"The maximum of three numbers is ="<<k<<endl;

      float g,h,i;
      cout<<"Enter the numbers to be compared with float datatype"<<endl;
      cin>>g>>h>>i;
      float f=m.max<float>(g,h,i);
      cout<<"The maximum of three numbers is ="<<f<<endl;
      return 0;


}