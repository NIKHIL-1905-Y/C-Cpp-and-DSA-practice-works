//8. Write a C++ Program to implement push and pop methods from stack using template.
#include <iostream>
using namespace std;

template<class T>
class Stack
{
    public:
    Stack()
    {
        top=-1;
    }
    void push(T i)
    {
        st[++top]=i;
    }
    T pop()
    {
        return st[top--];
    }
    private:
    int top;
    T st[100];

};
int main()
{
    Stack<int> int_stack;
    Stack<string> str_stack;
    int_stack.push(67);
    str_stack.push("Hello");
    str_stack.push("World");
   cout<<str_stack.pop()<<endl;
   cout<<str_stack.pop()<<endl;
     cout<<int_stack.pop()<<endl;
    

}