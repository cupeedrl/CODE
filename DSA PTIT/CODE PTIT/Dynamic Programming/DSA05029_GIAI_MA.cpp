#include<bits/stdc++.h>
using namespace std;

string s;
int dp[45];

int decode(string s)
{
    memset(dp,0,sizeof(dp));
    int n = s.size();
    if (n == 0 || s[0]== '0') // nothing to decode
    {
        return 0;
    }
    dp[0] = 1;// 1 way to decode empty string.
    dp[1] = 1;
    for(int i = 2; i <= n;i++)
    {
        if(s[i-1] != '0') //the s[i] element in the sequence is s[i-1]
        {
            dp[i] = dp[i] + dp[i-1];
        }
        if(s[i-2] == '1' || (s[i-2] == '2' && s[i-1] <= '6'))
        {
            dp[i] = dp[i] + dp[i-2];
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
        cin >> s;
        cout<<decode(s)<<endl;
    }   
    return 0;
}

