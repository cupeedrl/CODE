#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
long long power(long long n, long long r)
{
    if (k == 1)
        return n;
    long long x = power(n,r/2);
    if(k % 2 == 0)
        return ((x*x)%mod);
    else    
        return (((x*x)%mod)*n %mod);
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
        long long res = n;
        long long r = 0;
        while (res > 0)
        {
            r = r* 10 + res % 10;
            res/= 10; 
        }
        cout << power(n,r) << endl;
    }
}