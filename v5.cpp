#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//maximum number

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int>v;
    int element,max=0;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        v.push_back(element);
    }
    for(int i=0;i<n;i++)
    {
        if(max<v[i])
           max=v[i];
    }
    cout<<max;
}


