#include <bits/stdc++.h>
using namespace std;
int x[100006],y[100006],n,m;
/*
x = 0 -> ko có y
x = 1 -> y = 0
x = 2 -> y = 0,1 + 5,6,7,...
x = 3 -> y = 0,1,2 + 4,5,6,...
x >= 4 -> y = 0,1 + x+1,x+2,...
*/
// 1 2 2 3 3 4 remove[2,3];
//   1       5;  
int cnt(int start, int end ) //count positions are unavaible area in y;
{
    int *l = lower_bound(y,y+m, start);
    int *r = upper_bound(y,y+m, end);
    return r-l;
}
int arrange()
{
    int ans = 0;
    for (int i = 0; i < n; ++i) 
    {
        if(x[i] == 0)
            continue;
        else if(x[i] == 1)
            ans+= cnt(0,0); // but this case,is avaible area in y;
        else if(x[i] == 2)
            ans+= m-cnt(2,4);
        else if(x[i] == 3)
            ans+= m-cnt(3,3);
        else
            ans+= m-cnt(2,x[i]);
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
 
        cin >> n >> m;
        for (int i = 0; i < n; ++i) cin >> x[i];
        for (int i = 0; i < m; ++i) cin >> y[i];
        sort(y,y+m);
        cout << arrange() << endl;
    }
    return 0;
}
