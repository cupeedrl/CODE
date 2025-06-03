#include<bits/stdc++.h>
using namespace std;
int v, e, s, t;
bool visited[1001];
vector<vector<int>> adj (1001);
int trace[1001];
void bfs(int u)
{
    //initial
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        for(auto x : adj[v])
        {
            if(!visited[x])
            {
                q.push(x);
                visited[x] = true;
                trace[x] = v;
            }
        }
    }
}
void graph()
{
    cin >> v >> e >> s >> t;
    // reset
    memset(visited,false, sizeof(visited));
    for(int i = 1; i <= v; i++)
    {
        trace[i] = -1;
        adj[i].clear();
    }
    for(int i = 1; i<= e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(s);
    if(!visited[t])
    {
        cout << -1 << endl;
    }
    else
    {
        vector<int> path;
        for(int u = t; u != -1; u = trace[u])
        {
            path.push_back(u);
        }
        reverse(path.begin(), path.end());
        for(auto x : path) 
        {
            cout << x << " ";
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