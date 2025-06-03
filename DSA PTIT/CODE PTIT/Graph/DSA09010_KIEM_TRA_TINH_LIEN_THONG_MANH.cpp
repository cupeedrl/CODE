#include<bits/stdc++.h>
using namespace std;
int v, e;
bool visited[1001];
vector<vector<int>> adj (1001),res_adj(1001);

void bfs(int u,  vector<vector<int>> &graph)
{
    //initial
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        for(auto x : graph[v])
        {
            if(!visited[x])
            {
                q.push(x);
                visited[x] = true;
            }
        }
    }
}
// idea: strong connected graph-> the graph has all 2-way edges
// weak-> has at least 1-way edges
void graph()
{
    cin >> v >> e ;
    // reset test case
    memset(visited,false, sizeof(visited));
    for(int i = 1; i <= v; i++)
    {
        adj[i].clear();
        res_adj[i].clear();
    }
    for(int i = 1; i<= e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        res_adj[v].push_back(u);
    }
    // dfs on original graph;
    bfs(1,adj);
    for(int i = 1; i <= v; i++)
    {
        if(!visited[i])
        {
            cout <<"NO" << endl;
            return;
        }
    }
    
    memset(visited,false, sizeof(visited)); // use visited two times: adj, res_adj
    // dfs on reverse graph;
    bfs(1,res_adj);
    for(int i = 1; i <=v; i++)
    {
        if(!visited[i])
        {
            cout <<"NO" << endl;
            return;
        }
    }
    cout<<"YES" << endl;
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