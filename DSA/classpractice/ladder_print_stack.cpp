#include <iostream>

using namespace std;
class stack
{
    int top;
    int a[100];
    public :
    stack()
    {
        top=-1;
    }
    void push(int x)
    {
        if(top==99)
        {
            cout<<"Stack Overflow";
            return ;
        }
        else
        {
            top++;
            a[top]=x;
            
        }
    }
        void pop()
        {
            if(top==-1)
            {
                cout<<"stack underflow"<<endl;
                
            }
            else
            {
                top--;
            }
        }
        int peak()
        {
            if(top==-1)
            {
                cout<<"stack underflow"<<endl;
                return -1;
            }
            else
            {
                return a[top];
            }
        }
        bool isEmpty()
        {
            if(top==-1)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        
    };
   

int main()
{
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    stack s;
    while(n>0)
    {
        int k=n%10;
        s.push(k);
        n=n/10;

    }
    while(!s.isEmpty())
        {
            cout<<s.peak()<<endl;
            s.pop();
        }
        return 0;

}