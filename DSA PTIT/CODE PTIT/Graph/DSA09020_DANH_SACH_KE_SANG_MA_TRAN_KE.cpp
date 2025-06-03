#include<bits/stdc++.h>
using namespace std;
// given specific vertex. Eg: 1000 →  vector<int> adj[1001];
// not given specific vertex →  vector<vector<int>> adj(n);

void graph()
{
    int n; 
    cin >> n;
    cin.ignore();
    int adj[n+1][n+1]={};
    for(int i = 1; i <=n;i++)
    {
        string line;
        getline(cin, line);
        stringstream ss(line);//automatically convert into int;
        int x;
        while(ss >> x)
        {
            adj[i][x] = 1;
        }
    }
    
    for(int i = 1; i <=n;i++)
    {
        for(int j = 1; j <=n;j++)
        {
            cout << adj[i][j] <<" ";
        }
        cout << endl;
    }
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