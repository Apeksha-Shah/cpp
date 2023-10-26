#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//last occurence index
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int>v;
    int element;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        v.push_back(element);
    }
    int x,flag=-1;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(v[i]==x)
             flag=i;
    }
    cout<<flag;
}


