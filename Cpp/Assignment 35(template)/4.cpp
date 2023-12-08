//4. Write a C++ Program to Swap data using function template
#include <iostream>
using namespace std;

class Swapping
{
    public:
    template <class T>
     void swap(T a, T b)
     {
        int temp=a;
        a=b;
        b=temp;
    
    cout<<"Value After Swapping is "<<endl<<"a = "<<a<<" "<<"b = "<<b<<endl;
     }
};
int main()
{
    Swapping s;
    s.swap<int>(4,5);
    s.swap<char>('K','L');
    return 0;
  
}