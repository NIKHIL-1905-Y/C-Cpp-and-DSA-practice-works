//1. Define a function to check whether a given number is a Prime number or no
#include <iostream>
using namespace std;

int isPrime(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
            
        }
    }
    return 1;
    



}

int main()
{
    int n;
    cout<<"Enter the number to be checked"<<endl;
    cin>>n;
    int x=isPrime(n);
    if(x==1)
    {
        cout<<"the number is prime "<<endl;
    }
    else{
        cout<<"the number is not prime"<<endl;
    }


}