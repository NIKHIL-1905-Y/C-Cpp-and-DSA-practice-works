#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num ={10,34,45,67,78};

    vector<int>::iterator it;
    cout<<"vector(num) elements :";
    for(it = num.begin(); it!=num.end();it++)
    {
        cout<< *it <<" ";
    }
    return 0;
}