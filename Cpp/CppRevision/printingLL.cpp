#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;

    while (temp!= NULL)
    {
       
       
          temp = temp->next;
          cout<<temp->data <<" -> ";
    }
    
}

int main()
{
    Node n1(20);
    Node *head = &n1;

    Node n2(20);
    Node n3(30);
    Node n4(40);
    Node n5(60);
    Node n6(100);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;
    print(head);
    print(head);
}