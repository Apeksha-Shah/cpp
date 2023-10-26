 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 int main()
    {
        int n,m;
        cin>>n>>m;
        vector<int>arr[n+1];
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            arr[x].push_back(y);
            arr[y].push_back(x);

            //if directed graph then edge only in one direction 
              //if edge x-->y     ignore arr[y].push_back(x);
               //if edge y-->x     ignore arr[x].push_back(y);

        }
        // for(int i=1;i<=n;i++)
        // {
        //     for(int j=0;j<arr[i].size();j++)
        //          cout<<arr[i][j]<<" ";
        //     cout<<endl;
        // }

        
        queue<int>q;
        int vis[n+1]={0};
        for(int i=1;i<=n;i++)
        {
           // cout<<arr[i].size()<<endl;
           if(!vis[i])
            {
                   q.push(i);
                   vis[i]++;
            }
            for(int j=0;j<arr[i].size();j++)
            {
               if(!vis[arr[i][j]])
               {
                   q.push(arr[i][j]);
                   vis[arr[i][j]]++;
               }
            }
        }
        while(!q.empty())
        {
            cout<<q.front()<<" ";
            q.pop();
        }
    }
// 6 5
// 1 2
// 2 4
// 2 5
// 3 1
// 3 6


//6 7
// 1 2
// 2 3
// 3 4
// 2 5
// 4 6
// 2 1
// 4 3
// 1 2 3 5 4 6


    