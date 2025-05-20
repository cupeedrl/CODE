#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {

        int n, m,x,y, maxA = -1e9, minB = 1e9;

        cin >> n >> m;
        for (int i = 0; i < n; ++i)
        {
            cin >> x;
            maxA = max(maxA,x);
        } 
        for (int i = 0; i < m; ++i)
        {
            cin >> y;
            minB = min(minB,y);
        } 
        cout << (long long) maxA*minB << endl;
    }
    return 0;
}
