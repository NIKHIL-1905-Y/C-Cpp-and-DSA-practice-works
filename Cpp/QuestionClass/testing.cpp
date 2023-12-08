#include <iostream>
using namespace std;

int main()
{
    int a=5;
    int *c=&a;
    cout<<c<<endl;
    int *d=(&a)+1;
    cout<<d;
}