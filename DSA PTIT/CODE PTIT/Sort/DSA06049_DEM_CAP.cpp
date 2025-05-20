#include<bits/stdc++.h>
using namespace std;

void display()
{
    int n,k;
    cin >> n >> k;
    int a[n];
    long long ans = 0;
    for(int i = 0; i < n; i++)   cin >> a[i];
    sort(a,a+n);
    for(int i = 0; i < n; i++) // x - a[i] < k => k + a[i] > x
    {
        ans+= lower_bound(a+i+1,a+n, a[i]+k) - (a+i+1);
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    {
        display();
        cout << endl;
    }
}
// k + a[i] >= x ; k = 2 
// 1 2 4 5 8 8 9