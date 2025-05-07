#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005];
int n,v;
struct stuff
{
    int weight, value;
};
stuff items[1005];

int napsack()
{
    memset(dp,0,sizeof(dp));
    //dp[0][0] : no value, no weight;
    for(int i = 1; i <= n;i++)
    {
        for(int j = 1; j <= v;j++)
        {
            dp[i][j] = dp[i-1][j]; // not choose
            if(j-items[i].weight >= 0) // available capacity
            {
                dp[i][j] = max(dp[i][j],dp[i-1][j-items[i].weight]+items[i].value);
            }
        }
    }
    return dp[n][v];
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> v;
        for(int i = 1; i<= n;i++)
        {
            cin >> items[i].weight;
        }
        for(int i = 1; i<= n;i++)
        {
            cin >> items[i].value;
        }
        
        cout<<napsack()<<endl;
    }   
    return 0;
}

