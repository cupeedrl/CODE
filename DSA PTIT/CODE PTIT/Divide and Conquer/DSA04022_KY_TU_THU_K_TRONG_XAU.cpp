#include<bits/stdc++.h>
using namespace std;
long long len[93];

char conquer(long long n, long long k) {
    long long mid = pow(2,n-1);
    if(k == mid)
        return n+64;
    if(k < mid)
        return conquer(n-1, k);
    else    
        return conquer(n-1,k-mid);
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    {
        long long n,k;
        cin >> n >> k;
        cout << conquer(n,k)<<endl;
    }
}