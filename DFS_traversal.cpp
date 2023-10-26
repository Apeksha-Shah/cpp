 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 void dfs(int s,vector<int>arr[],int vis[],vector<int>&v)
 {
         vis[s]=1;
         v.push_back(s);
         for(auto it: arr[s])
         {
            if(!vis[it])
                  dfs(it,arr,vis,v);
         }
 }
 int main()
    {
         
        // 6 7
        // 1 2                              
        // 1 4
        // 2 3
        // 2 5
        // 3 6
        // 5 6
        // 5 4
        // 1 2 3 6 5 4

        //FOR START=5 ANS WILL BE :-  5 2 1 4 3 6
        //FOR START=2 ANS WILL BE :-  2 1 4 5 6 3
        int n,m;
        cin>>n>>m;
        vector<int>arr[n+1];
        for(int i=0;i<m;i++)                              
        {
            int x,y;                          
            cin>>x>>y;                      
            arr[x].push_back(y);                   
            arr[y].push_back(x);

        }

        //print the adjacency list 

        // for(int i=1;i<=n;i++)
        // {
        //     for(int j=0;j<arr[i].size();j++)
        //          cout<<arr[i][j]<<" ";
        //     cout<<endl;
        // }

        int vis[n+1]={0};
        int start=1;
        vector<int>v;
         dfs(start,arr,vis,v);
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        return 0;
    }

    