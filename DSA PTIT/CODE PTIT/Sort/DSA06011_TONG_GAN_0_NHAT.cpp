#include <bits/stdc++.h>
using namespace std;
int x[1001],n,k;

int arrange()
{
    int ans = 1e9;
    for(int i = 1; i <= n; ++i) 
    {
        for(int j = i+1; j <= n; ++j) 
        {
            int sum = x[i]+x[j];
            if(abs(sum) < abs(ans))
            {
                ans = sum;
            }
        }
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; ++i) cin >> x[i];
        cout << arrange() << endl;
    }
    return 0;
}
