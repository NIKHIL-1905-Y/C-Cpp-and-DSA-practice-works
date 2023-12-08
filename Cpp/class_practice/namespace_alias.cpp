#include <iostream>
using namespace std;

namespace nikhil_kumar_namespace
{
    int x=5;
    
   
}
 namespace nkn=nikhil_kumar_namespace;
 int main()
 {
    cout<<nkn::x;
 }