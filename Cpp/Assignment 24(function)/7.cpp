//7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include <iostream>
using namespace std;

int sum(int x,int y=0)
{
    return x+y;
}
int main()
{
    int x,y;
    cout<<"Enter the numbers "<<endl;
    cin>>x>>y;
    int z=sum(x,y);
    cout<<"The sum is "<<z<<endl;
}