//6. Write a C++ program to calculate an average of 3 numbers

#include <iostream>
using namespace std;
int main()
{
    int l,b,h;
    cout<<"Enter the three numbers"<<endl;
    cin>>l>>b>>h;
    int avg=(l+b+h)/3;


    
    cout<<"The average of three number is "<<avg;
    return 0;

}