

#include<bits/stdc++.h>
using namespace std;
vector < int > adj[5];
bool visit[5];


void dfs(int u)
{
    cout<<u<<"\n";
    visit[u]=1;
    for(int i=0; i<adj[u].size(); i++)
    {
        int v=adj[u][i];
        if(visit[v]!=1)
        {
            dfs(v);
        }
    }
}



int main()
{

    int e;
    cin>>e;
    int u,v;
    while(e--)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        //adj[v].push_back(u);
    }
    dfs(1);
    return 0;



}
