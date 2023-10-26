#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
      int data;
      node *left;
      node *right;
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

            //CREATION OF BINARY TREE
node * buildtree()
{
    cout<<"enter data:\n";
    int data;
    cin>>data;
    if(data==-1)
         return NULL;
    node *root=new node(data);
    cout<<"enter data for left side of"<<data<<endl;
    root->left=buildtree();
    cout<<"enter data for right side"<<data<<endl;
    root->right=buildtree();
     return root;
}

int count=0;
            // LEVEL ORDER TRAVERSAL 
void level_order_traversal(node *root)
{
     queue<node *>q;
     q.push(root);
     q.push(NULL);
     while(!q.empty())
     {
        node *temp=q.front();
       
        q.pop();
        if(temp==NULL)
         {
            ::count++;
              cout<<endl;
              if(!q.empty())
                 q.push(NULL);
         }
         else
         {
             cout<<temp->data<<" ";
            if(temp->left!=NULL)
                 q.push(temp->left);
            if(temp->right!=NULL)
                 q.push(temp->right);
         }
     }
}

//INORDER 
void inorder(node *root)
{
    if(root==NULL)
    {
          return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


// PREORDER
void preorder(node *root)
{
    if(root==NULL)
       return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


//POSTORDER
void postorder(node *root)
{
    if(root==NULL)
       return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


//BUILD TREE LEVELWISE
void buildtree_level_wise(node *&root)
{
    queue<node*>q;
    cout<<"Enter data for root:";
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty())
    {
        node *temp=q.front();
        q.pop();
        cout<<"data for left side of :"<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1)
        {
            temp->left=new node(leftdata);
            q.push(temp->left);
        }
        cout<<"data for right side of :"<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1)
        {
            temp->right=new node(rightdata);
            q.push(temp->right);
        }
    }
     
}

int main()
{
    node *root=NULL;
    //root=buildtree();
    // 1 3 8 -1 -1 9 -1 -1 7 10 -1 -1 -1
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    buildtree_level_wise(root);
       
    cout<<"INORDER:"<<endl;
    inorder(root);
    cout<<endl;

    cout<<"PREORDER:"<<endl;
    preorder(root);
    cout<<endl;

    cout<<"POSTORDER:"<<endl;
    postorder(root);
    cout<<endl;


    level_order_traversal(root);
    cout<<endl<<::count<<endl;
    return 0;
}
