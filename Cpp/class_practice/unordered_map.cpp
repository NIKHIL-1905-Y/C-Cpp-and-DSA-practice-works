#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int >m({{"praveen",34},{"Nikhil",22},{"Raza",30}});

    unordered_map<string ,int> ::iterator x;

    for(x=m.begin();x !=m.end(); x++)
    {
        cout<<"key= "<<x->first<<" value= "<<x->second<<endl;
    }
    return 0;
}
