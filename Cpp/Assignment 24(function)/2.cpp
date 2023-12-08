//2. Define a function to find the highest value digit in a given number.
#include<iostream>

using namespace std;
int high(int x)
{
    int max=x%10;
    while(x!=0)
    {
        int dig=x%10;
        if(dig>max)
        {
            max=dig;
        }
        x=x/10;
    }
    return max;


}
int main()
{
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int out=high(n);
    cout<<out<<endl;
    
}