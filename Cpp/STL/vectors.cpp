#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    bool x;

    cin>>n;

    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            x=true;
            break;

        }
        else{
            x=false;
        }
       
    }
    if(x==true)
    {
        cout<<"the number is not prime "<<endl;
    }
    else
    {
        cout<<"The number is prime"<<endl;
    }
    

}