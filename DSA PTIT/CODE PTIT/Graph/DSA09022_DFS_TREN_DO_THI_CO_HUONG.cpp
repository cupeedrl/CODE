#include <bits/stdc++.h>
using namespace std;
int v, e, u;
vector<vector<int>> adj(1001);
bool visited[1001];

void dfs(int u)
{
    cout << u <<" ";
    visited[u] = true;
    for(auto x : adj[u])
    {
        if(!visited[x])
            dfs(x);
    }
}

void graph() {

    memset(visited,false, sizeof(visited));

    // reset the adjacency list
    for (int i = 1; i <= v; i++) {
        adj[i].clear();
    }   
    cin >> v >> e >> u;
    for(int i = 1; i <= e; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    dfs(u);
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        graph();
    }
}

