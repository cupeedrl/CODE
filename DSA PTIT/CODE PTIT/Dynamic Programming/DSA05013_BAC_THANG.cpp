#include<bits/stdc++.h>
using namespace std;

int n,k;
long long mod = 1e9+7;
// the number ways to climb up n stairs equals to the nth step
int dynamic_programm(int n, int k) // seek sum = k;
{
    long long dp[n+1]; 
    memset(dp,0,sizeof(dp));

    dp[0] = 1;
    // dp[0]: 1 way = no climb

    for(int i = 1; i <=n ;i++) // from 1 to n stairs
    {
        for(int j = 1; j <= k ;j++) // attempt from 1-k stairs.
            if (i - j >= 0) 
            {
                dp[i] = (dp[i] + dp[i - j]) % mod;
            }  
    }
    return dp[n]; 
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << dynamic_programm(n,k) << endl;
    }
}

