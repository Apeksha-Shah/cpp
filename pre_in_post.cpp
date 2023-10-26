  //PREORDER,INORDER AND POSTORDER IN ONE TRAVERSAL 

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

void pre_in_post(node *root)
{
    stack<pair<node *,int>>st;
    st.push({root,1});
    vector<int>pre,in,post;
    if(root==NULL)
        return;
    while(!st.empty())
    {
        auto it=st.top();
        st.pop();

        //preorder
        if(it.second==1)
        {
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->left!=NULL)
                st.push({it.first->left,1});
        }

        //inorder
        else if(it.second==2)
        {
            in.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->right!=NULL)
                st.push({it.first->right,1});
        }

        //postorder
        else
        {
            post.push_back(it.first->data);
        }
    }
    cout<<"PREORDER: ";
    for(int i=0;i<pre.size();i++)
         cout<<pre[i]<<" ";
    cout<<endl;
    cout<<"INORDER: ";
    for(int i=0;i<in.size();i++)
         cout<<in[i]<<" ";
    cout<<endl;
    cout<<"POSTORDER: ";
    for(int i=0;i<post.size();i++)
         cout<<post[i]<<" ";
    cout<<endl;
}
int main()
{
    node *root=NULL;
    root=buildtree();
    // 1 3 8 -1 -1 9 -1 -1 7 10 -1 -1 -1
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    pre_in_post(root);
    return 0;
}
