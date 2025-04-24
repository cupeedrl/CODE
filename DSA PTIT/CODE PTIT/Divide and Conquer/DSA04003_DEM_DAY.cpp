#include<bits/stdc++.h>
using namespace std;
long long mod = 123456789;
// new solution
long long power(long long n, long long k)
{
    long long result = 1;
    n%= mod;
    while(k > 0)
    {
        if(k%2)
            result= (result*n) % mod;
        n = (n*n) % mod;
        k/=2;
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << power(2,n-1) << endl;
    }
}