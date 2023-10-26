#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//How to store graph 
//way:-1
    // int main()
    // {
    //     int n,m;
    //     cin>>n>>m;
    //     int arr[n+1][m+1];
    //     for(int i=0;i<m;i++)
    //     {
    //         int x,y;
    //         cin>>x>>y;
    //         arr[x][y]=1;
    //         arr[y][x]=1;
    //     }
    // }


//way:-2
    // int main()
    // {
    //     int n,m;
    //     cin>>n>>m;
    //     vector<int>arr[n+1];
    //     for(int i=0;i<m;i++)
    //     {
    //         int x,y;
    //         cin>>x>>y;
    //         arr[x].push_back(y);
    //         arr[y].push_back(x);

    //         //if directed graph then edge only in one direction 
    //           //if edge x-->y     ignore arr[y].push_back(x);
    //            //if edge y-->x     ignore arr[x].push_back(y);

    //     }
    // }

    //if weight is given then store in pair

    int main()
    {
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>>arr[n+1];
        for(int i=0;i<m;i++)
        {
            int x,y,w;
            cin>>x>>y>>w;
            arr[x].push_back(make_pair(y,w));
            // arr[y].push_back(make_pair(x,w));
        }
        cout<<"Ans"<<endl;
        for(int i=0;i<m;i++)
        {
            cout<<"pairs stored at index "<<i<<endl;
            for(int j=0;j<arr[i].size();j++)
               cout<<arr[i][j].first<<" "<<arr[i][j].second<<endl;
        }
    }
