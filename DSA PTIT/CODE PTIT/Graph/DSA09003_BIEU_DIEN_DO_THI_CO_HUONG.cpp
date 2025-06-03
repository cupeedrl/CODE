#include<bits/stdc++.h>
using namespace std;
// haven't known a specific vertex. Eg: 1000 →  vector<int> adj[1001];
// known a specific vertex →  vector<vector<int>> adj(n);

void graph()
{
    int v,e; 
    cin >> v >> e;

    vector<vector<int>> adj(1001);
    cin.ignore();

    while(e--)
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    
    for(int i = 1; i <=v;i++)
    {
        cout << i <<": ";
        int j;
        for(auto j : adj[i])
        {
            cout << j <<" ";
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