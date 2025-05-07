#include <bits/stdc++.h>
using namespace std;

int solve(string &M) {
    int n = M.length();
    if (n == 0) return 0; // Không có gì để giải mã

    // dp[i] là số cách giải mã chuỗi con đầu tiên có độ dài i
    vector<int> dp(n + 1, 0);
    dp[0] = 1; // Có 1 cách để giải mã chuỗi rỗng

    for (int i = 1; i <= n; i++) {
        // Nếu ký tự tại vị trí i là hợp lệ (từ 1 đến 9)
        if (M[i - 1] != '0') {
            dp[i] += dp[i - 1];
        }

        // Nếu 2 ký tự cuối hợp lệ (từ "10" đến "26")
        if (i > 1 && M[i - 2] == '1' || (M[i - 2] == '2' && M[i - 1] <= '6')) {
            dp[i] += dp[i - 2];
        }
    }

    return dp[n];
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string M;
        cin >> M;
        cout << solve(M) << endl;
    }
    return 0;
}
