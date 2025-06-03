#include<bits/stdc++.h>
using namespace std;
// given specific vertex. Eg: 1000 →  vector<int> adj[1001];
// not given specific vertex →  vector<vector<int>> adj(n);

void graph()
{
    int n; 
    cin >> n;
    cin.ignore();
    vector<vector<int>> adj(n+1);
    for(int i = 1; i <=n;i++)
    {
        for(int j = 1; j <=n;j++)
        {
            int x;
            cin >> x;
            if(x == 1)
                adj[i].push_back(j);
        }
    }

    
    for(int i = 1; i <=n;i++)
    {
        int x;
        for(auto x : adj[i])
        {
            cout<< x <<" ";
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