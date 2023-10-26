#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int freq[26]={0};
    for(int i=0;i<s.length();i++)
    {
        if(!isupper(s[i]))
            freq[s[i]-'a']++;
        else 
            freq[s[i]-'A']++;
    }
    for(int i=0;i<26;i++)
       cout<<freq[i]<<" ";
}

//number of character are 256 if you want to find frequency of any ascii char 
//create array of size 256 and increment repeated value by one and find particular element freq