#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
      int key;
      node *left;
      node *right;
    node(int d)
    {
        this->key=d;
        this->left=NULL;
        this->right=NULL;
    }
};
 
node *insert(node*root,int key)
{
      
    // If the tree is empty, return a new node 
    if (root == NULL) 
        return new node(key); 
  
    // Otherwise, recur down the tree 
    if (key < root->key) 
    { 
        root->left = insert(root->left, key); 
    } 
    else if (key > root->key) 
    { 
        root->right = insert(root->right, key); 
    } 
  
    // Return the node pointer 
    return root; 
} 
void inorder(node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->key<<endl;
    inorder(root->right);
}
int main()
{
    node *root=NULL;
    root=insert(root,60);
    insert(root,50);
    insert(root,70);
    insert(root,30);
    insert(root,20);
    inorder(root);
    return 0;
}
