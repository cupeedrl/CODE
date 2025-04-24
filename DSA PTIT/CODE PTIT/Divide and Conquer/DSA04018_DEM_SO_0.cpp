#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int n,x;
int conquer(int x)
{
    int l = 0;
    int r = n-1;
    while(l<=r&& x >= a[0] && x <= a[n-1])
    {
        int mid = (l+r)/2;
        if(x == a[mid])
            return mid;
        if(x<a[mid])
            r = mid-1;
        else   
            l = mid + 1;    
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> x;
        for(int i = 1; i<=n;i++)
            cin>>a[i];
        if(conquer(x) == -1)
            cout<<"NO\n";
        else
            cout << conquer(x)<< endl;
    }
}