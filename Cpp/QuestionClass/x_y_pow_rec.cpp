#include <iostream>
using namespace std;

int pow(int x,int n)
{
    if(x==0)
    {
        return 0;
    }
    else if (n==0)
    {
        return 1;
    }
    else
    {
        int output=x*pow(x,n-1);
        return output;

    }


}
int main()
{
    int x,n;
    cout<<"Enter the value of x and power n"<<endl;
    cin>>x>>n;
    int output=pow(x,n);
    cout<<"The output of x^n is "<<" "<<output<<endl;
    return 0;

}