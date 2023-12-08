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
        stack s;
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        cout<<s.peak()<<endl;
        while(!s.isEmpty())
        {
            cout<<s.peak()<<endl;
            s.pop();
        }
        return 0;
    }
