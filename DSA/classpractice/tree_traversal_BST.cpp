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
//Preorder Traveersal

    void preorder(node* root)
    {
        if(root!=NULL)
        {
        cout<<root->value<<" " ;
        preorder(root->left);
        preorder(root->right);
        } 
    }
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
//Postorder Traversal
    void postorder(node *root)
    {
        if(root!=NULL)
        {
            postorder(root->left);
            postorder(root->right);
            cout<<root->value<<" ";
        }
    }
    //Level order Traversal
    void levelOrder(node* root)
    {
        if(root==NULL)
        {
            return ;
        }
        queue<node*>q;
        q.push(root);
        while(!q.empty())
        {
            node *temp=q.front();
            cout<<temp->value<<" ";
            q.pop();
        
        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
        }
    }
    //Height of a BST
    int Height(node* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        else
        {
            int rheight=Height(root->right);
            int lheight=Height(root->left);

            if(lheight>rheight)
            {
                return lheight+1;
            }
            else{
                return rheight+1;
            }
        }
    }
    //Searching In BST
    node *search(node *root,int v)
    {
        if(root==NULL)
        {
            return NULL;

        }
        if(root->value==v)
        {
            return root;
        }
        else if(root->value>v)
        {
            return search(root->left,v);
        }
        else{
            return search(root->right,v);
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
    
    node *root=new node(30);
    root->left=new node(20);
    root->right=new node(50);
    root->left->left=new node(10);
    
    root->right->left=new node(40);
    root->right->right=new node(60);
    

cout<<"Preorder Traversal = ";
preorder(root);
cout<<endl;
cout<<"Inorder Traversal = ";
inorder(root);
cout<<endl;
cout<<"Postorder Traversal= ";
postorder(root);
cout<<endl;
cout<<"Levelorder Traversal =  ";
levelOrder(root);
cout<<endl;
cout<<"Height = "<<Height(root)<<endl;
//seaching in 
node *temp=search(root,60);
if(temp==NULL)
{
    cout<<"Element not found"<<endl;
}
else
{
    cout<<"Element Found"<<endl;
}
cout<<"Min Element = "<<MinBST(root)->value<<endl;
cout<<"MAx Element = "<<MaxBST(root)->value<<endl;
return 0;
}