#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//170 45 75 90 802 2

void using_count_sort(int a[],int pos,int n)
{
    int freq[10]={0};
    //count frequency of each element
        for(int i=0;i<n;i++)
        freq[(a[i]/pos)%10]++;
        int ans[n];
    //find cumulative frequency
        for(int i=1;i<10;i++)
            freq[i]+=freq[i-1];
    //traverse and put the element on its correct position 
        for(int i=n-1;i>=0;i--)
            ans[--freq[(a[i]/pos)%10]]=a[i];
        for(int i=0;i<n;i++)
        a[i]=ans[i];
}

void radix_sort(int a[],int n)
{
    int maxi=INT_MIN;
    //find maximum element
       for(int i=0;i<n;i++)
           maxi=max(maxi,a[i]);
        cout<<maxi<<endl;
    //sorting bit wise LSB to MSB
       for(int pos=1;(maxi/pos)>0;pos*=10)
       {
           using_count_sort(a,pos,n);
       }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
       cin>>a[i];
    radix_sort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}