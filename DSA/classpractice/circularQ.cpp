#include <iostream>
using namespace std;

class Queue
{
    int front ,rear;
    int a[5];
    public :
    Queue()
    {
        front= rear=-1;
    }
    bool isfull()
    {
        if((front==0&&rear==4)||(front==rear+1))
        {
            return true;
        }
        else{
            return false;
        }
    }
    bool isEmpty()
    {
        if(front==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
        void Enqueue(int x)
        {
            if(isfull())
            {
                cout<<"Queue is full"<<endl;
            }
            else{
                if(front==-1)
                {
                    front++;
                    rear++;
                    a[rear]=x;
                }
                else
                {
                    rear=(rear+1)%5;
                    a[rear]=x;
                }
            }
        }

    int  dequeue()
        {
            if(isEmpty())
            {
                cout<<"Queue is Empty"<<endl;
                return -1;
            }
            else{
                int x=a[front];
                if(front==rear)
                {
                    front=rear=-1;
                }
                else{
                    front=(front+1)%5;
                }
                return x;
            }
        }

        
    
};
int main()
{
    Queue q;
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);
    q.Enqueue(50);
    
    while (!q.isEmpty())
    {
        cout<<q.dequeue()<<endl;
    }
    
    return 0;
}