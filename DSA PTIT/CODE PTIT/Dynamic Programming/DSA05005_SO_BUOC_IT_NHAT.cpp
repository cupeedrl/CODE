#include<bits/stdc++.h>
using namespace std;
int a[1001], dp[1001];
int n;
int dynamic_programm() // LIS
{
    int len = 0;
    for(int i = 1; i <= n; i++) 
    {
       dp[i] = 1;
       for(int j = 1; j < i; j++) 
        {
            if(a[i] >= a[j] && dp[i] <= dp[j]+1) // equal sign due not to  strictly increasing
            {
                dp[i] = dp[j]+1;
            }
        }
        len = max(len,dp[i]);
    }
    return n-len;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++) 
        {
           cin >> a[i];
        }
        cout << dynamic_programm() << endl;
    }
   
    
}