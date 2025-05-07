#include<bits/stdc++.h>
using namespace std;
int n,k;
long long mod = 1e9+7;
int dp[100005];

int way()
{
    memset(dp,0,sizeof(dp));

    dp[0] = 1;// no step up

    for(int i = 1; i <= n;i++)
    {
        for(int j = 1; j <= k;j++)
        {
            if(i-j>= 0)
                dp[i] = (dp[i]+dp[i-j]) % mod;
        }
    }
    return dp[n];
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout<<way()<<endl;
    }   
    return 0;
}

