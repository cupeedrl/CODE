#include <bits/stdc++.h>
using namespace std;

int v, e;
vector<vector<int>> adj(1001);
// indirect graph
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
    int odd = 0;
    for (int i = 1; i <= v; i++)
    {
        if(adj[i].size() % 2 == 1) 
            odd++;
    }
    if(odd == 2) cout << 1 << endl; //  has 2 odd degrees-> Eulerian path;
    else if(odd == 0) cout << 2 << endl; // has 0 odd degrees->Eulerian cylce;
    else
        cout << 0 << endl;
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        graph();
    }
    return 0;
}
