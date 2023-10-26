

//number of provinces using bfs traversal

        // #include<iostream>
        //  #include<bits/stdc++.h>
        //  using namespace std;
        //  int main()
        //     {
        //         int n,m;
        //         cin>>n>>m;
        //         vector<int>arr[n+1];
        //         for(int i=0;i<m;i++)
        //         {
        //             int x,y;
        //             cin>>x>>y;
        //             arr[x].push_back(y);
        //             arr[y].push_back(x);
        //         }
        //         // for(int i=1;i<=n;i++)
        //         // {
        //         //     for(int j=0;j<arr[i].size();j++)
        //         //          cout<<arr[i][j]<<" ";
        //         //     cout<<endl;
        //         // }

                
        //         queue<int>q;
        //         int vis[n+1]={0},count=0;
        //         for(int i=1;i<=n;i++)
        //         {
        //             if(!vis[i])
        //             {
        //                   count++;
        //                   while(!q.empty())
        //                   {
        //                     cout<<q.front()<<" ";
        //                     q.pop();
        //                   }
        //                 cout<<endl;
        //                 q.push(i);
        //                 vis[i]++;
        //             }
        //             for(int j=0;j<arr[i].size();j++)
        //             {
        //                if(!vis[arr[i][j]])
        //                {
        //                    q.push(arr[i][j]);
        //                    vis[arr[i][j]]++;
        //                }
        //             }
        //         }
        //         while(!q.empty())
        //         {
        //             cout<<q.front()<<" ";
        //             q.pop();
        //         }
        //         cout<<endl;
        //         cout<<count;
        //     }



//Number of provinces using dfs traversal
//Time complexity :-  o(N)+o(n+2*Edge)   nearly o(N)
        #include<iostream>
        #include<bits/stdc++.h>
        using namespace std;
        void dfs(int i,vector<int>arr[],int vis[])
        {
                vis[i]=1;
                for(auto it: arr[i])
                {
                    if(!vis[it])
                        dfs(it,arr,vis);
                }
        }
        int main()
            {
                
                // 8 5
                // 1 2
                // 3 4
                // 5 6
                // 7 8
                // 2 3
                //output:-3
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
                int vis[n+1]={0},count=0;
                for(int i=1;i<=n;i++)
                {
                    if(!vis[i])
                    {
                        count++;
                        dfs(i,arr,vis);
                    }
                }

                cout<<endl<<count<<endl;
                return 0;
            }