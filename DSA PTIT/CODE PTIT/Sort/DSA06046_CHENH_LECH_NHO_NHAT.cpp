#include<bits/stdc++.h>
using namespace std;

void display()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)   cin >> a[i];
    sort(a.begin(), a.end());
    int minor = 1e9;
    for(int i = 0; i < n; i++)
    {
        minor = min(abs(a[i]-a[i-1]), minor);
    }
    cout << minor;
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
