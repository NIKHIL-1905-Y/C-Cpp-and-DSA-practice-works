#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    node()
    {
        next=NULL;;
    }
};
class LL{
    node* head;
    public:
    void push(int value)
{
     node *temp=new node();
        temp->data=value;
        temp->next=head;
        head=temp; 
}
void display()
    {
        if(head==NULL)
        {
            cout<<"Linked List is Empty"<<endl;
        }
       
        else{
            node *temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<" -> ";
                temp=temp->next;
            }
            cout<<endl;
            cout<<"NULL"<<endl;

        }
    }
    bool ispresent(int x)
    {
        node *ptr=head;
        while(ptr->next!=NULL)
        {
            if(ptr->data==x)
            {
                return true;
            }
            else{
                return false;
            }
            ptr=ptr->next;

        }
       
        
    }


};
int main()
{
    LL l1;
    
    int x=1;
    while(x==1)
    {
        cout<<"Enter 1 for inserting element in the linked list"<<endl;
        cout<<"Enter 2 for displaying the elements in the linked list "<<endl;
        cout<<"Enter 3 for checking whether the given element is present or not"<<endl;
        int choice;
        int value;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"Enter the value "<<endl;
            cin>>value;
            l1.push(value);
            break;

            case 2: 
            l1.display();
            break;


            case 3:cout<<"Enter the value"<<endl;
            int x;
            cin>>x;
        
            l1.ispresent(x) ? cout << "Yes"<<endl: cout << "No"<<endl;
           
              break;

            default:cout<<"Invalid choice"<<endl;
            break;


        }
    }
    return 0;
}
