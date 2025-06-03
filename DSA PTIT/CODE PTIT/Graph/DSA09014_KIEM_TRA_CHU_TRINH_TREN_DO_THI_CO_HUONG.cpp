#include <bits/stdc++.h>
using namespace std;
int v, e;
vector<vector<int>> adj(1001);
bool visited[1001];
bool check;
//idea: if you are at a position again but not by the lastest way you've come -> circle
void dfs(int u, int previous_vertex)
{
    visited[u] = true;
    for(auto v : adj[u])
    {
        if(!visited[v])
            dfs(v, u);
        else // be at a position again
        {
            if(v != previous_vertex)//not use the lastest way
            {
                check = true;
                return;
            }
        } 
    }
}

void graph() {
    cin >> v >> e;
    memset(visited,false, sizeof(visited));
    // reset the adjacency list
    for (int i = 1; i <= v; i++) {
        adj[i].clear();
    }   
    for(int i = 1; i <= e; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    check = false;
    for(int i = 1; i <= v; i++)// use loop as graph hasn't been connected yet
    {
        if(!visited[i])
        {
            dfs(i,0);
            if(check) 
            {
                cout <<"YES" << endl;
                return;
            }    
        }
    }
    cout <<"NO" << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        graph();
    }
}

