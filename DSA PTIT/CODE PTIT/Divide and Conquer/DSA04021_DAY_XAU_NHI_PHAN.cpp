#include<bits/stdc++.h>
using namespace std;
long long len[93];
int n;
long long k;

void divide() {
    len[1] = 1;
    len[2] = 1;
    for (int i = 3; i <= 92; i++) {
        len[i] = len[i - 1] + len[i - 2];
    }
}

char conquer(int n, long long k) {
    if (n == 1) return '0';
    if (n == 2) return '1';
    if (k <= len[n - 2]) return conquer(n - 2, k);
    return conquer(n - 1, k - len[n - 2]);
}

//Eg.G(6)= 01010010 = [010]   +   [10010]
//                    fibo(4)    fibo(5)
// 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    divide();
    while(t--)
    {
        cin >> n >> k;
        cout << conquer(n,k)<<endl;
    }
}