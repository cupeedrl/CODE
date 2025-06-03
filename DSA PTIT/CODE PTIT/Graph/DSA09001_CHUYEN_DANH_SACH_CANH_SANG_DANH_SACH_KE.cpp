#include<bits/stdc++.h>
using namespace std;
// haven't known a specific vertex. Eg: 1000 →  vector<int> adj[1001];
// known a specific vertex →  vector<vector<int>> adj(n);


void graph()
{
    int v, e;
    cin >> v >> e;
    vector<vector<int>> adj(1001);

    for(int i = 0; i < e;i++)
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 1; i <=n;i++)
    {
        cout << i <<": ";
        for(int j = 0; j < adj[i].size();j++)
        {
            cout << adj[i][j] <<" ";
        }
        cout << endl;
    }
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