//8. Write a C++ program to swap values of two int variables without using third variable
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the numbers whose values is to be swapped"<<endl;

    cin>>a>>b;
    a=a-b;
    b=b+a;
    a=b-a;
    cout<<"The value after swapping is "<<a<<" "<<b;

}