/*#include <iostream>
using namespace std;
class Addition
{
    public:
    int x;
    int y;
    Addition(int a,int b)
    {
        x=a;
        y=b;
    }
    int add()
    {
        return x+y;
    }
};
int main()
{
    Addition a= Addition(2,3);
    int z=a.add();
    cout<<z;
    return 0;


    
}
*/
#include <iostream>
using namespace std;

class Addition
{
    public:
    int x;
    int y;
    Addition(int a,int b)
    {
        x=a;
        y=b;
    }
    int add()
    {
        return x+y;
    }


};
int main()
{
    int l,r;
    cout<<"Enter two NUmbers"<<endl;
    cin>>l>>r;
    Addition a=Addition(l,r);
    int z=a.add();
    cout<<"The sum is ="<<z;
    return 0;

}