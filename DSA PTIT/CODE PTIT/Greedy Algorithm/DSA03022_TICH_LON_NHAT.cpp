#include<bits/stdc++.h>

using namespace std;
int n, x[10001];
int choose = max(
    {
        x[n-1]*x[n-2]*x[n-3],
        x[n-1]*x[n-2],
        x[0]*x[1],
        x[0]*x[1]*x[n-1],
    }
    );
int main()
{
    cin >> n;
    for(int i=0 ;i<n;i++) cin >> x[i];
    sort(x, x+n);
    cout<< greedy();
    
    return 0;
}
