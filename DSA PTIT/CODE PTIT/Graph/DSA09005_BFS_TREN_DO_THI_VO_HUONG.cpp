#include<bits/stdc++.h>
using namespace std;
// given specific vertex. Eg: 1000 →  vector<int> adj[1001];
// not given specific vertex →  vector<vector<int>> adj(n);
bool visited[1001];
vector<vector<int>> adj(1001);
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty())
    {
        //intitial root;
        int v = q.front();
  
        cout << v << " ";
        q.pop();
        for(auto x : adj[v]) // consider adjacent vertex;
        {
            if(!visited[x])
            {
                q.push(x);
                visited[x] = true;
            }
        }
    }
}
void graph()
{
    int v,e,u; 
    cin >> v >> e >> u;
    // reset the adjacency list
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
    bfs(u);
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