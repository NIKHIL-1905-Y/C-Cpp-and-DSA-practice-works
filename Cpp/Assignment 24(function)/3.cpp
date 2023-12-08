//Define a function to calculate x raised to the power y.
/*#include <iostream>
using namespace std;

int power(int x,int y)
{
    int mul=1;
    for(int i=1;i<=y;i++)
    {
         mul=mul*x;
    }
    return mul;
}
int main()
{
    int x,y;
    cout<<"enter the numbers whose power is to be claculated"<<endl;
    cin>>x>>y;
    int ret=power(x,y);
    cout<<ret;
    
} */
//Recursive
#include <iostream>
using namespace std;

int power(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return x*power(x,n-1);
    }
}
int main()
{
    int x,y;
    cout<<"Enter the number and its power "<<endl;
    cin>>x>>y;
    int out=power(x,y);
    cout<<out<<endl;
    return 0;
}