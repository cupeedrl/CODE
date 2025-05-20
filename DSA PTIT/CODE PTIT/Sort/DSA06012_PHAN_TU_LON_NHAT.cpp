#include<bits/stdc++.h>
using namespace std;
int n,k,a[1001];

void arrange(int k)
{   
    sort(a,a+n);
    for(int i = n-1; i >= 0;i--) 
    {
        if(k == 0) return;
        cout<<a[i] <<" ";
        k--;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;

        for(int i = 0; i<n;i++) cin >> a[i];
        arrange(k);
        cout <<endl;
    }   
    return 0;
}
