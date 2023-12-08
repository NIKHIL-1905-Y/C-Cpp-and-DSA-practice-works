//6. Define a class Square to find the square of a number and write a C++ program to Count 
//number of times a function is called

#include <iostream>
using namespace std;

class Square
{
    public:
    int x;
    int count =0;
    Square()
    {
       
    }

void square(int x)
{
    int sq = x*x;
    cout<<" The square of  "<< x<< " is "<< sq <<endl;
    count++;
    
}
void Count()
{
    cout<<"The function is called "<<count<<" times "<<endl;
}

};
int main()
{
    Square s1;
    s1.square(5);
    s1.Count();

}