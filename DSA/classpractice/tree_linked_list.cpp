#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node *left;
    node *right;

    node(int v)
    {
        data = v;
        left = NULL;
        right = NULL;
    }

};
//This code can only be used for testing purpose

int main()

{
    // node *root=new node(10);
    // root->left=new node(20);
    // root->right=new node(30);

    // root->right->left=new node(40);
    node *root=new node(5);
    root->left= new node(20);
    root->right=new node(25);
    root->left->left=new node(35);
    root->left->right=new node(40);
    root->right->right=new node(50);
    root->right->right->left=new node(65);
    root->left->right->right=new node(45);
    
    

    return 0;
}