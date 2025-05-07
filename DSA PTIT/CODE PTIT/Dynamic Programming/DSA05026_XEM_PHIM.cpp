#include<bits/stdc++.h>
using namespace std;
//is equivelent to napsack, but try to differnt method
int n, c;

int w[105];
int dp[105][25005];//dp[j] = maximum mass achieved with capacity j

int napsack()
{
    memset(dp,0,sizeof(dp));
    // dp[i][j] consider i first cows, van capacity j;
    for(int i = 1; i<= n;i++)
    {
        for(int j = 1; j<=c;j++)
        {
            dp[i][j] = dp[i-1][j]; // not choose;
            if(j >= w[i]) // capacity of van is enough to store cows[i];
            {
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+w[i]);
            }
        }
    }
    return dp[n][c];
}
int main()
{
    cin >> c >> n;
    for(int i = 1; i<= n;i++)
    {
        cin>> w[i];
    }
    cout<<napsack();
    return 0;
}

