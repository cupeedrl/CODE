#include <bits/stdc++.h>
using namespace std;
int v, e;
vector<vector<int>> adj(1001);
bool visited[1001];
vector<pair<int,int>> edge_list;
void dfs(int u)
{
    visited[u] = true;
    for(auto x : adj[u])
    {
        if(!visited[x])
            dfs(x);
    }
}
void dfs2(int u, int s, int t)
{
    visited[u] = true;
    for(auto v : adj[u])
    {
        // attempt to remove x-y & y-x edge out of graph
        if((v == s && u == t) || (v == t && u == s)) 
            continue;
        if(!visited[v])
            dfs2(v,s,t);
    }
}

void connected_component()
{
    memset(visited,false, sizeof(visited));
    int connect_component = 0;
    for(int i = 1; i <= v; i++)
    {
        if(!visited[i])
        {
            connect_component++;
            dfs(i);
        }
    }
    //attempt to remove each vertex and check after connected component                                               
    for(auto it : edge_list)
    {
        int x = it.first;
        int y = it.second;
        int cnt = 0;
                
        memset(visited,false,sizeof(visited));
        for(int j = 1; j <= v; j++)
        {
            if(!visited[j])
            {
                cnt++;
                dfs2(j,x,y); // attempt to remove x-y & y-x edge
            }
        }
        if(cnt > connect_component)
        {
            cout << x << " " << y <<" ";
        }
    }
}
void graph() {

    memset(visited,false, sizeof(visited));
    edge_list.clear();  
    // reset the adjacency list
    for (int i = 1; i <= v; i++) {
        adj[i].clear();
    }   
    cin >> v >> e;
    for(int i = 1; i <= e; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        edge_list.push_back({x,y});
    }
    connected_component();
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        graph();
    }
}

