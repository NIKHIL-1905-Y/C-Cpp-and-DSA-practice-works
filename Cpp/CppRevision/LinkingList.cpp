#include <iostream>
using namespace std;

class Node
{

public:
        int data;
        Node* next;
        Node(int data)
        {
            this->data=data;
            this->next = NULL;
        }
    
};
int main()
{
    Node n1(10);
    Node *head = &n1;
    //cout<<head<<endl;
    Node n2(20);

    n1.next = &n2;
    cout<<n1.data<<" "<<n2.data<<endl;
    cout<<n1.next <<endl<< &n2 <<endl;
    cout<<head->data<<endl;
    cout<<head->next<<endl;
    cout<<head->next->data<<endl;
    cout<<head->next->next<<endl;
    

}
