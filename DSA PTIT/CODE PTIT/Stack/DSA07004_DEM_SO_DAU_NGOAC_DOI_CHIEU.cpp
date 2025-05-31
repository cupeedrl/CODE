#include <bits/stdc++.h>
using namespace std;
//Eg: (())))))()))
int minChanges(string s) {
    int res = 0;       
    int balance = 0;  

    for (char c : s) {
        if (c == '(') {
            balance++;
        } else { // c == ')'
            if (balance > 0) {
                balance--; // possbile to concatenate
            } else {
                res++;     // change ) into (
                balance++;
            }
        }
    }

    return res + balance / 2;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); 

    while (T--) {
        string s;
        getline(cin, s);
        cout << minChanges(s) << '\n';
    }
    return 0;
}
