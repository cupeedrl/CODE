#include<bits/stdc++.h>
using namespace std;
long long len[95]; // độ dài chuỗi G(n)

void divide() {
    len[1] = 1;
    len[2] = 1;
    for (int i = 3; i <= 92; i++) {
        len[i] = len[i - 1] + len[i - 2];
    }
}

char conquer(int n, long long k) {
    if (n == 1) return 'A';
    if (n == 2) return 'B';
    if (k <= len[n - 2]) return conquer(n - 2, k);
    return conquer(n - 1, k - len[n - 2]);
}

//Eg.G(6)= BABABBAB = [BAB]   +   [ABBAB]
//                    fibo(4)    fibo(5)
// 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    divide();
    int t; cin >> t;
    while(t--)
    {
        int n;
        long long k; // de bai: k khong qua 18 chu so,int chi duoc 9 chu
        cin >> n >> k;
        cout << conquer(n,k) << endl;
    }
}

// G(1) = "A"
// G(2) = "B"
// G(3) = G(1) + G(2) = "A" + "B" = "AB"
// G(4) = G(2) + G(3) = "B" + "AB" = "BAB"
// G(5) = G(3) + G(4) = "AB" + "BAB" = "ABBAB"
// G(6) = G(4) + G(5) = "BAB" + "ABBAB" = "BABABBAB"
         