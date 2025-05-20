#include<bits/stdc++.h>
using namespace std;

void display()
{
    int n;
    cin >> n;
    vector<int> a(n + 1, 0);
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] += a[i-1];
    }                           //left                  right
    for(int i = 1; i <= n ;i++) //a[i-2], a[i-1] a[i] a[i+1] a[i+2]..
    {
        int left_sum = a[i-1];
        int right_sum = a[n] - a[i];
        if(left_sum == right_sum)
        {
            cout << i;
            return; 
        }
    }
    cout << "-1";
}
int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t; cin >> t;
    while(t--)
    {
        display();
        cout << "\n";
    }
}

