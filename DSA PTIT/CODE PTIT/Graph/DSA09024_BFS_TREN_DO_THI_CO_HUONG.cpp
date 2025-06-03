#include <bits/stdc++.h>
using namespace std;
int v, e, u;
vector<vector<int>> adj(1001);
bool visited[1001];

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int v = q.front();
        cout <<v << " ";

        q.pop();
        for(auto x : adj[v])
        {
            if(!visited[x])
            {
                q.push(x);
                visited[x] = true;
            }
        }
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
    bfs(u);
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        graph();
    }
}

