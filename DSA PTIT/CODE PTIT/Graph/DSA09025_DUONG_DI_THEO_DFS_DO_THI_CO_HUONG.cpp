#include<bits/stdc++.h>
using namespace std;

int v,e,s,t;
vector<vector<int>> adj(1001);
bool visited[1001];
int trace[1001];

void dfs(int u)
{
    visited[u] = true;
    for(auto v : adj[u])
    {
        if(!visited[v])
        {
            trace[v] = u; // the previous vertex of v is u;
            dfs(v);
        }
    }
}

void graph()
{
    cin >> v >> e >> s >> t;
    memset(visited,false, sizeof(visited));
    for(int i = 1; i<= v; i++)
    {
        adj[i].clear();
        trace[i] = -1;
    }

    for(int i = 1; i <= e; i++)
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    dfs(s);
    if(trace[t] == -1)
    {
        cout<< -1 << endl;
    }
    else
    {
        vector<int> path;
        for(int u = t; u!=-1; u = trace[u])
        {
            path.push_back(u);
        }
        sort(path.begin(), path.end());
        for(int i = 0; i < path.size(); i++)
        {
            cout << path[i] << " ";
        }
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        graph();
    }
}