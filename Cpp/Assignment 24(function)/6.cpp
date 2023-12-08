//6. Define a function to swap data of two int variables using call by reference
#include <iostream>
using namespace std;
void swap(int *p,int *q)
{
    int t=*p;
    *p=*q;
    *q=t;

cout<<"Value after swapping is"<<" "<<*p<<" "<<*q<<endl;

}


int main()
{
    int x,y;
    cout<<"Enter the numbers to be swapped"<<endl;
    cin>>x>>y;
    cout<<"value before swapping "<<x<<" "<<y<<endl;
    swap(&x,&y);
    
    return 0;

}