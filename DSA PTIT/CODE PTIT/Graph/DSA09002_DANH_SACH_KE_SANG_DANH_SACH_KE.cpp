#include<bits/stdc++.h>
using namespace std;
// haven't known a specific vertex. Eg: 1000 →  vector<int> adj[1001];
// known a specific vertex →  vector<vector<int>> adj(n);


void graph()
{
    int n; cin >> n;

    int adj[n+1][n+1] ={};
    cin.ignore();
    
    for(int i = 1; i <= n;i++)
    {
        string line;
        getline(cin,line);

        stringstream ss(line);
        int x;
        while(ss >> x)//traverse left -> right
        {
            adj[x][i] = 1;
            adj[i][x] = 1;            
        }
    }
    for(int i = 1; i <=n;i++)
    {
        for(int j = i+1; j <=n;j++)
        {
            if (adj[i][j] == 1)
                cout << i <<" "<< j << endl;
        }
    }
    cout << endl;
}
int main()
{
    int t;
    t = 1;
    while(t--)
    {
        graph();
    }
}