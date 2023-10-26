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
int tree_depth(node *root)
{
    if(root==NULL)
       return 0;
    int l=tree_depth(root->left);
    int r=tree_depth(root->right);
    return 1+max(l,r);
}
int main()
{
    node *root=NULL;
    root=buildtree();
    // 1 3 8 -1 -1 9 -1 -1 7 10 -1 -1 -1
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    cout<< tree_depth(root)<<endl;
    return 0;
}
