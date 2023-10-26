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


//INORDER 
void inorder(node *root,int &count)
{
    if(root==NULL)
     {    return ;}
    inorder(root->left,count);
    if(root->left==NULL && root->right==NULL)
    {     count++; }
    inorder(root->right,count);
}




int main()
{
    node *root=NULL;
    int count=0;
    buildtree_level_wise(root);
    level_order_traversal(root);
    inorder(root,count);
    cout<<"Number of leafnodes: "<<count<<endl;
    return 0;
}
