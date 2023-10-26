#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//sum of elements

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
    int flag=0;
    for(int i=0;i<n;i++)
        flag+=v[i];
    cout<<flag;
}


