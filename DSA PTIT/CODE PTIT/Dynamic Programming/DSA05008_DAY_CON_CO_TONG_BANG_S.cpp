#include<bits/stdc++.h>
using namespace std;
int a[1001], dp[1001];
int n,s;

void dynamic_programm(int s) // seek
{
    memset(dp,0,sizeof(dp)); // dp[size] = 0;
    dp[0] = 1; //sum = 0 can always be created ;
    for(int i = 1; i <=n ;i++)
    {
        for(int j = s; j >= a[i];j--)
        {
            if(dp[j-a[i]] == 1 && dp[j] == 0)
            {
                dp[j] = 1;
            }
        }
    }
    if(dp[s] == 1)
        cout<<"YES\n" ;
    else
        cout<<"NO\n";
}
// idea: check if pre subsum exist
// Eg. 2 7 4 11 we need take 11;
// Eg. sum = dp[11]= 11-4 = 7
// check if sum = 7 exist. if yes, means we can create, add a[i] =7 by mark 1; 

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--)
    {
        cin >> n >> s;
        for(int i = 1; i <= n; i++) 
        {
           cin >> a[i];
        }
        dynamic_programm(s);
    }
}