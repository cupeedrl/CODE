#include <bits/stdc++.h>
using namespace std;
int x[100],n,k;

int arrange()
{
    int ans = 0;
    for(int i = 1; i <= n; ++i) 
    {
        for(int j = i+1; j <= n; ++j) 
        {
            if(x[i]+x[j] == k)
                ans++;
        }
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 1; i <= n; ++i) cin >> x[i];
        sort(x+1,x+n+1);
        cout << arrange() << endl;
    }
    return 0;
}
