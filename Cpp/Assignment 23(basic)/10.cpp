//10. Write a C++ program to add all the numbers of an array of size 10
#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int i,sum=0;
    cout<<"Enter the elements of array"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        sum=a[i]+sum;
        
    }
    cout<<"The sum of numbers is "<<sum;
    return 0;

}