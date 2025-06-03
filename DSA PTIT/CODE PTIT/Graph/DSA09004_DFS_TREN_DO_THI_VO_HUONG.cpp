#include<bits/stdc++.h>
using namespace std;
// given specific vertex. Eg: 1000 →  vector<int> adj[1001];
// not given specific vertex →  vector<vector<int>> adj(n);
bool visited[1001];
vector<vector<int>> adj(1001);
void dfs(int u)
{
    cout << u <<" "; // cout visted vertex;
    visited[u] = true;
    for(auto v : adj[u]) // traverse each vertex
        if(!visited[v])
        {
            dfs(v);
        }
}
void graph()
{
    int v,e,u; 
    cin >> v >> e >> u;
    // reset the adjacency list due to 
    for (int i = 1; i <= v; i++) {
        adj[i].clear();
    }
    // enter edges list
    for(int i = 1; i <= e;i++)
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
    dfs(u);
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