#include <bits/stdc++.h>
using namespace std;
int n;
int house[100006], dp[100006];
int steal(int n)
{
    if(n == 1)
        return house[1];
    memset(dp,0,sizeof(dp));
    dp[1] = house[1];
    dp[2] = max(house[1],house[2]);

    for(int i = 3; i<= n;i++)
    {
        dp[i] = max(dp[i-1],dp[i-2]+house[i]);
    }
    return dp[n];
}
int main() {
    int t; // Số lượng bộ test
    cin >> t;
    while (t--) {

        cin>>n;

        for(int i = 1;i<= n; i++)
        {
            cin >> house[i];
        }
        cout<<steal(n)<<endl;
    }
    return 0;
}
