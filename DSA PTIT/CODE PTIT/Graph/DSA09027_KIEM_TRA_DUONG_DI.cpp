#include <bits/stdc++.h>
using namespace std;

int v, e, s, t, q;
vector<vector<int>> adj(1001);
bool visited[1001];
int trace[1001];

void bfs(int u) {

    queue<int> q;
    q.push(u);
    visited[u] = true;

    while (!q.empty()) {
        int v = q.front(); q.pop();
        for (auto x : adj[v]) {
            if (!visited[x]) {
                visited[x] = true;
                q.push(x);
            }
        }
    }
}

void graph() {
    cin >> v >> e;
    
    for(int i = 1; i<= v; i++)
    {
        adj[i].clear();
    }

    for (int i = 1; i <= e; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cin >> q;
    while (q--) {
        cin >> s >> t;
        bfs(s); // 
        if (!visited[t]) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
        memset(visited, false, sizeof(visited));
        memset(trace, -1, sizeof(trace));
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        graph();
    }
    return 0;
}
