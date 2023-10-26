#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//sorting in c++

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
    sort(v.begin(),v.end());
    // for(int i=0;i<n;i++)
    //     cout<<v[i]<<" ";

    vector<int>::iterator i;
    for(i=v.begin();i!=v.end();i++)
       cout<<*i<<endl;
    return 0;
}
