#include<bits/stdc++.h>
using namespace std;

int a[1001], dp[1001][1001];
int n,k;
long long mod = 1e9+7;

// formula: C(i, j) = C(i-1, j-1) + C(i-1,j).
// actually, it's recursion but uses loop
// means that is the dynamic programming
int dynamic_programm(int c, int k) // Combination of n choose k
{
    for(int i = 0; i <=n ;i++)
    {
        for(int j = 0; j <= i; j++) // k <= n;
        {
            if( j == 0 || i == j) // i == n, j == k;
            {
                dp[i][j] = 1;
            }
            else
                dp[i][j] = dp[i-1][j-1] +dp[i-1][j];
            dp[i][j]%= mod;
        }
    }
    return dp[n][k]; 
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
// dp[0][0] = 1
// dp[1][0] = dp[1][1] = 1
// dp[2][1] = dp[1][0] + dp[1][1] = 1 + 1 = 2
// dp[3][2] = dp[2][1] + dp[2][2] = 2 + 1 = 3
// dp[4][3] = dp[3][2] + dp[3][3] = 3 + 1 = 4
// dp[5][3] = dp[4][2] + dp[4][3] = 6 + 4 = 10

