#include <iostream>
using namespace std;
namespace A
{
    int x=6;
}
namespace A
{
    int y=5;
}
int main()
{
    cout<<A::x<<endl;
    cout<<A::y<<endl;
}