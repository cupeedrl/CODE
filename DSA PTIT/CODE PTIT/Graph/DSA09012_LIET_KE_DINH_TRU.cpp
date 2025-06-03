#include<bits/stdc++.h>
using namespace std;
// given specific vertex. Eg: 1000 →  vector<int> adj[1001];
// not given specific vertex →  vector<vector<int>> adj(n);
bool visited[1001];
vector<vector<int>> adj(1001);
int v,e; 
void dfs(int u)
{
    visited[u] = true;
    for(auto v : adj[u]) // traverse each vertex
        if(!visited[v])
        {
            dfs(v);
        }
}
// articulation_point: the removed point causes graph to be separative 
// Idea: remove each vertex and check, if connected components of graph > original connected components
// that's ariticulation point
void articulation_point()
{   //find original connected_components
    int connected_component = 0;
    int ans = 0;
    memset(visited,false,sizeof(visited));
    for(int i = 1; i <= v; i++)
    {
        if(!visited[i])// if graph is not connected-> separative, connected_component++
        {
            connected_component++;
            dfs(i);    
        }    
    }
    // attempt to remove each vertex and check 
    for(int i = 1; i <= v; i++)
    {
        memset(visited,false,sizeof(visited));
        visited[i] = true;

        int cnt = 0; // count connected_component after remove vertex ith
        for(int j = 1; j <= v; j++)
        {
            if(!visited[j])
            {
                cnt++;
                dfs(j);
            }
        }
        if(cnt > connected_component)  // connected components of graph after removing> original connected components
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
void graph()
{
    cin >> v >> e;
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
    articulation_point();
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
