#include <iostream>
using namespace std;

class node
{
    public:
    int value;
    node* next;
    node* prev;
    node()
    {
        next=prev=NULL;
    }

};
class DoublyLL
{
    node *head;
    public:
    DoublyLL()
    {
        head=NULL;
    }
    void insert_at_beg(int x)
    {
        node *temp=new node();
        temp->value=x;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            head->prev=temp;  
            temp->next=head;
            head=temp;
        }

    }
    void insert_at_end(int x)
    {
        node *temp=new node();
        temp->value=x;
        if(head==NULL)
        {
            head=temp;
        }
        else{
            node *ptr=head;
            while(ptr->next!=NULL)
             {
            ptr=ptr->next;

              }
        ptr->next=temp;
        temp->prev=ptr;

        }
    }
    void  insert_at_middle(int x,int index)
    {
        if(head==NULL)
        {
            cout<<"Linked List is Empty"<<endl;
        }
        node *temp=new node;
        temp->value=x;
        if(index==0)
        {
            head->prev=temp;
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
            temp->next->prev=temp;
            ptr->next=temp;
            temp->prev=ptr;
        }


}

void deletion_from_beg()
{
    if(head==NULL)
    {
        cout<<"LIst is empty"<<endl;
    }
    else{
        cout<<"Deleted element = "<<head->value<<endl;
        node *temp=head;
        head=temp->next;
        head->prev=NULL;
    }
}
void deletion_from_end()
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
    else{
        node *ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->prev->next=NULL;
        delete(ptr);
    }
}
void deletion_from_middle(int index)
{
    if(head==NULL)
    {
        cout<<"List is Empty"<<endl;

    }
    else if(index==0)
    {
        node *ptr=head;
        head=ptr->next;
        head->prev=NULL;
        delete(ptr);
    }
    else{
        node *ptr=head;
        while(index>0)
        {
            ptr=ptr->next;
            index--;
            
        }
        ptr->prev->next=ptr->next;
        if(ptr->next!=NULL)
        {
        ptr->next->prev=ptr->prev;
        delete(ptr);
        }
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
                cout<<temp->value<<" <-> ";
                temp=temp->next;
            }
            cout<<"NULL";
        }
    }
};
    
int main()
{
    DoublyLL l1;
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
         l1.deletion_from_middle(index);
        break;

         case 6:l1.deletion_from_end();
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
