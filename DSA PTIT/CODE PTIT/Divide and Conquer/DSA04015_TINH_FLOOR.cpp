#include<bits/stdc++.h>
using namespace std;
long long a[1000001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int pos = -1;
        for(int i = 1; i <= n; i++) 
        {
            cin >> a[i];
            if(a[i] <= x) 
                pos= i;
        }
        cout << pos << endl;
    }
}