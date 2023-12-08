#include <iostream>
#include<queue>
using namespace std;
class node 
{
    public :
    int value;
    node *left;
    node *right;
    node(int v)
    {
        value=v;
        left=right=NULL;
    }
};
//Inorder Traversal
    void inorder(node *root)
    {
        if(root!=NULL)
        {
            inorder(root->left);
            cout<<root->value<<" ";
            inorder(root->right);
        }
    }
//Minimum element of a BST
    node *MinBST(node* root)
    {
        if(root==NULL)
        {
            return NULL;
        }

        while(root->left!=NULL)
        {
            root=root->left;
        }
        return root;
    }
    //Maximum element of a BST
      node *MaxBST(node* root)
    {
        if(root==NULL)
        {
            return NULL;
        }

        while(root->right!=NULL)
        {
            root=root->right;
        }
        return root;
    }
//Insertion BST
node* Insert(node *root,int v)
{
    if(root==NULL)
    {
        return new node(v);
    }
    if(root->value<v)
    {
        root->right=Insert(root->right,v);

    }
    if(root->value>=v)
    {
        root->left=Insert(root->left,v);
    }
    return root;
}
//Inorder Predecessor and Succesor
node* InorderSuccesor(node* root)
{
    return MinBST(root->right);
}
node* InorderPredecessor(node* root)
{
    return MaxBST(root->left);
}

//Deletion in BST

node* deletion(node*root,int v)
{
    if(root==NULL)
    {
        return root;
    }
    if(root->value<v)
    {
        root->right=deletion(root->right,v);
    }
   else if(root->value>v)
    {
        root->left=deletion(root->left,v);
    }
    //case 1. Zero child
    if(root->left==NULL && root->right==NULL)
    {
        delete root;
        return NULL;
    }
  //Case 2. One child
    else if(root->left==NULL)
    {
        node* temp=root->right;
        delete root;
        return temp;
    }
    else if(root->right==NULL)
    {
        node* temp=root->left;
        delete root;
        return temp;
    }
    //Case 3.Two Child
    else
    {
        node *temp=InorderSuccesor(root);
        root->value=temp->value;
        root->right=deletion(root->right,temp->value);

    }
    return root;

}

int main()
{
    node* root = Insert(NULL,20);
    Insert(root,10);
    Insert(root,30);
    Insert(root,15);
    Insert(root,5);
    Insert(root,25);
    Insert(root,40);
    Insert(root,50);
    inorder(root);
    cout<<endl;

    deletion(root,40);
    inorder(root);//case1.of deletion (zero child)

    return 0;
 
}