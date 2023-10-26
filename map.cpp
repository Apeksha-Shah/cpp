#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
         mp[arr[i]]++;
    int min=INT_MIN;
    int value;
    for(auto it:mp)
    {  
        if(min<it.second)
        {
            min=it.second;
            value=it.first;
        }
    }
    //for finding maximum frequency element
    cout<<"freq of "<<value<<" is "<<min<<endl;
}