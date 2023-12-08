#include <iostream>
#include <array>
using namespace std;

int main()
{
    int c=0;
    array<int ,9> a ={1,2,3,4,5,6,7,8,9};
    //1.By using a.size();
    
    //cout<<a.size()<<endl;
    for(auto i =a.begin() ;i!=a.end(); i++)
    {
        c++;
    }
    cout<<"The length of the array is : "<<c;
    return 0;

}