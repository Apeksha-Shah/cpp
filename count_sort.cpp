#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void count_sort(int a[],int n)
{
    int maxi=INT_MIN;
    //find maximum element
        for(int i=0;i<n;i++)
            maxi=max(a[i],maxi);
    //count frequency of each element
        int freq[maxi+1]={0};
        for(int i=0;i<n;i++)
            freq[a[i]]++;
        int ans[n];
    //find cumulative frequency
        for(int i=1;i<(maxi+1);i++)
            freq[i]+=freq[i-1];
    
    //traverse and put the element on its correct position 
        for(int i=n-1;i>=0;i--)
            ans[--freq[a[i]]]=a[i];
    for(int i=0;i<n;i++)
       cout<<ans[i]<<" ";
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
       cin>>a[i];
    count_sort(a,n);
}