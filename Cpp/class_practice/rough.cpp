#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    a=8;
    b=51;
    c=2;
    c=(a^c)^a;
   cout<<c<<endl;
    b=b%4;
    printf("%d",a+b+c);
    return 0;
}
