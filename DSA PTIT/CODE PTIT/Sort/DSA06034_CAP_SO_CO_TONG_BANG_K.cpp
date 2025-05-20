#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[100005];
void display()
{
    sort(a,a+n);
    long long ans = 0;
    for(int i = 0; i <n; i++)
    {
        ans+= upper_bound(a+i+1,a+n,k-a[i])-lower_bound(a+i+1,a+n,k-a[i]);
    }    
    cout << ans << endl;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin>> n >> k;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        display();
    }
}

