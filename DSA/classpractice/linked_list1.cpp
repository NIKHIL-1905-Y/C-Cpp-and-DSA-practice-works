#include <iostream>
using namespace std;
class node
{
    public :
    int value;
    node* next;

    node()
    {
        next=NULL;
    }
};
class Singly_linked_list
{
    node *head;
    public :
    Singly_linked_list()
    {
        head=NULL;
    }
    void insert_at_beg(int x)
    {
        node *temp=new node();
        temp->value=x;
        temp->next=head;
        head=temp;
    }
    void insert_at_end(int x)
    {
        node*temp=new node();
        temp->value= x;
        if(head==NULL)
        {
            head=temp;
        }
        else{
            node *ptr=head;
            while(ptr->next!=0)
            {
                ptr=ptr->next;
            }
            ptr->next=temp;
        }

    }
    void insert_at_middle(int x,int index)
    {
        node *temp=new node;
        temp->value=x;
        if(index==1)
        {
            temp->next=head;
            head=temp;
        }
        else{
            node *ptr=new node();
            while(index>1)
            {
                ptr=ptr->next;
                index--;
            }
            temp->next=ptr->next;
            ptr->next=temp;
        }

    }
    void deletion_from_beg()
    {
        if(head==NULL)
        {
            cout<<"List is empty";

        }
        else
        {
            cout<<"Deleted element is :"<<head->value<<endl;
            node *ptr=head;
            head=head->next;
            delete(ptr);

        }
        
    }
    void deletion_at_end()
    {
        if(head==NULL)
        {
            cout<<"LIst is empty"<<endl;

        }
        else if(head->next==NULL)
        {
            delete(head);
            head=NULL;
        }
        else
        {
            node *ptr=new node();
            while(ptr->next->next!=NULL)
            {
                ptr=ptr->next;

            }
            cout<<"Deleted element is:"<<ptr->next->value<<endl;
            delete(ptr->next);
            ptr->next=NULL;

        }
    }
    void deletion_at_middle(int index)
    {
        if(head==NULL)
        {
            cout<<"List is empty"<<endl;

        }
         else if(index==0)
        {
            node *ptr=head;
            head=head->next;
            delete(ptr);

        }
        else
        {
            node *temp1=head;
            node *temp2=head;

            while(index>0)
            {
                temp1=temp2;
                temp2=temp1->next;
                index--;
            }
            temp1->next=temp2->next;
            delete(temp2);
        }

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
                cout<<temp->value<<" -> ";
                temp=temp->next;
            }
            cout<<"NULL";
        }
    }
    

};
int main()
{
    Singly_linked_list l1;
     int x=1;
    
   
    while(x==1)
    {

    

    cout<<"1.)Insertion at beginning"<<endl;
    cout<<"2.)Insertion at middle"<<endl;
    cout<<"3.)Insertion at end"<<endl;
    cout<<"4.) Deletion at the beginning"<<endl;
    cout<<"5.) Deletion at the middle"<<endl;
    cout<<"6.) Deletion at the end"<<endl;
    cout<<"7.)Display all the element"<<endl;

   
    int choice ;
    
    cout<<"Enter your  choice"<<endl;
    cin>>choice;
    int value,index;

      
    switch(choice)
    {
        case 1:
        cout<<"Enter the element "<<endl;
        cin>>value;
        l1.insert_at_beg(value);
        break;

         case 2:
         cout<<"Enter the element "<<endl;
         cin>>value;
         cout<<"enter the Index"<<endl;
         cin>>index;
         l1.insert_at_middle(value,index);
         break;

         case 3:
        cout<<"Enter the element "<<endl;
         cin>>value;
         l1.insert_at_end(value);
         break;

         case 4:
         l1.deletion_from_beg();
         break;

         case 5: cout<<"Enter the index"<<endl;
         cin>>index;
         l1.deletion_at_middle(index);
        break;

         case 6:l1.deletion_at_end();
         break;

         case 7:l1.display();
         break;
         default:
        cout<<"Invalid choice"<<endl;
        

    }
     cout<<"Do you want to continue (yes=1) and (No=0)"<<endl;
        cin>>x;

    }



}
