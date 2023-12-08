//6. Write a C++ Program to find Sum of Array using function template.

#include <iostream>
using namespace std;

class Sum
{
    public:
    template<class T>
    T sumarr(T a[],T n)
    {
        T sum = 0;
        for(int i=0;i<n;i++)
        {
            sum = sum + a[i];
        }
return sum;
    }
    

};

int main()
{
    int arr[5]={1,2,3,4,5};
    Sum s;
    int z=s.sumarr<int>(arr,5);
    cout<<"The sum is = "<<z<<endl;
    return 0;


}