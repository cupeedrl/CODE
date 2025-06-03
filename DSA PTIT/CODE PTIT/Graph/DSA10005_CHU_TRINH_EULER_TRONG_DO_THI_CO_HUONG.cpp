#include <bits/stdc++.h>
using namespace std;

int v, e;
// direct graph
// each vertex has in edges = out edges
vector<vector<int>> adj(1001);
int in[1001],out[1001];
void graph() {

    cin >> v >> e;
    for(int i = 1; i<= v; i++)
    {
        adj[i].clear();
        in[i] = 0;
        out[i] = 0;
    }

    for (int i = 1; i <= e; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        in[x]++;
        out[y]++;
    }
    for(int i = 1; i <= v; i++)
    {
        if(in[i] != out[i]) 
        {
            cout << 0 << endl;
            return;
        }    
    }
    cout << 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        graph();
    }
    return 0;
}
