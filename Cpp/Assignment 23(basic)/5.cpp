//5. Write a C++ program to calculate the volume of a cuboid.
#include <iostream>
using namespace std;
int main()
{
    int l,b,h;
    cout<<"Enter the dimensions"<<endl;
    cin>>l>>b>>h;
    int vol=l*b*h;


    
    cout<<"The volume of  cuboid is "<<vol;
    return 0;

}