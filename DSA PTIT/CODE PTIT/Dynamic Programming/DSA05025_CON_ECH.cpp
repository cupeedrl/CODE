#include<bits/stdc++.h>
using namespace std;

int n;

// the number ways to climb up n stairs equals to the nth step
long long dynamic_programm(int n) // seek sum = k;
{
    long long dp[52]; 

    memset(dp,0,sizeof(dp));

    dp[0] = 1;
    // dp[0]: 1 way = no climb

    for(int i = 1; i <=n ;i++) // from 1 to n stairs
    {
        for(int j = 1; j <= 3 ;j++) // attempt from 1-k stairs.
            if (i - j >= 0) 
            {
                dp[i] = (dp[i] + dp[i - j]);
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
        cin >> n;
        cout << dynamic_programm(n) << endl;
    }
}

