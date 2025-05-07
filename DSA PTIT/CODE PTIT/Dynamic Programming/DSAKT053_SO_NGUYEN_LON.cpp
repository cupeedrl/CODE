#include<bits/stdc++.h>
using namespace std;
// is identical to max common string ex;
int t;
string str1, str2;

int solve()
{
    int n = str1.length();
    int m = str2.length();
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));

    for(int i = 1; i<= n; i++)
    {
        for(int j = 1; j<= m; j++)
        {
            if(str1[i-1] == str2[j-1])
            {
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
        }
    }
    return dp[n][m];
}

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> str1 >> str2;
        cout << solve() << endl;
    }
    return 0;
}
