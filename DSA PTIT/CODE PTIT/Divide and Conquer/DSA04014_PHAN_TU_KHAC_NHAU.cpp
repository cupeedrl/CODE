#include<bits/stdc++.h>
using namespace std;
long long a[1000001],b[1000000];
int conquer(long long m, long long n)
{
    for(int i = 1;i<=m;i++) cin >> a[i];
    for(int i = 1;i<=n;i++) cin >> b[i];
    for(int i = 1;i<=n;i++) 
        if(a[i]!=b[i])  
            return i;
    return m;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    {
        long long n,m;
        cin >> m;
        n = m-1;
        cout << conquer(m,n) << endl;
    }
}