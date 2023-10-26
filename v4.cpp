#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//product of elements of two vectors

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int>v,v1,v2;
    int element;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        v.push_back(element);
    }
    for(int i=0;i<n;i++)
    {
        cin>>element;
        v1.push_back(element);
    }
    for(int i=0;i<n;i++)
        v2.push_back(v[i]*v1[i]);
    for(int i=0;i<n;i++)
        cout<<v2[i]<<" ";
}


