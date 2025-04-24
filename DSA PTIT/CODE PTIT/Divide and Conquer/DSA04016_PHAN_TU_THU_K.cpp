#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    {
        int n,k,m;
        cin >> n >> m >> k;
        int a[m+n+1];
        for(int i = 1; i<=m+n;i++)
        {
            cin >> a[i];
        }
        sort(a+1,a+m+n+1);
        cout << a[k]<<endl;
    }
}