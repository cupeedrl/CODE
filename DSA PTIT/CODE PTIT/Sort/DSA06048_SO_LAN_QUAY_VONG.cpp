#include<bits/stdc++.h>
using namespace std;

void display()
{
    int n;
    cin >> n;
    vector<int> a(n);
    bool found = false;
    int ans = 0;
    for(int i = 0; i < n; i++)   cin >> a[i];
    for(int i = 1; i < n; i++)
    {
       if(a[i-1] > a[i])
       {
            ans = i;
            break;
       }
    }
    cout << ans << endl;
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
