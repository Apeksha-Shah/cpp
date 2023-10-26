#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int m,int r)
{
    int left=l;
    int right=m+1;
    vector<int>v;
    while(left<=m && right<=r)
    {
        if(arr[left]<=arr[right])
        {
            v.push_back(arr[left]);
            left++;
        }
        else
        {
            v.push_back(arr[right]);
            right++;
        }
    }
    while(left<=m)
    {
          v.push_back(arr[left]);
        left++;
    }
    while(right<=r)
    {
          v.push_back(arr[right]);
          right++;
    }
    for(int i=l;i<=r;i++)
    {
        arr[i]=v[i-l];
    }
}
void merge_sort(int arr[],int l,int r)
{
    if(l>=r)
        return;
    int mid=(l+r)/2;
    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];
    merge_sort(arr,0,n-1);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}