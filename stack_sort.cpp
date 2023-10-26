#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s1,s2;
    s1.push(13);
    s1.push(7);
    s1.push(9);
    s1.push(1);
    s1.push(12);
    while(!s1.empty())
    {
        if(s2.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        else if(s1.top()>s2.top())
        {
            s2.push(s1.top());
            s1.pop();
        }
        else if(s1.top()<s2.top())
        {
            int temp=s1.top();
            s1.pop();
            while(temp<s2.top())
            {
                  s1.push(s2.top());
                  s2.pop();
            }
            s2.push(temp);
        }
    }
    while(!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
}
