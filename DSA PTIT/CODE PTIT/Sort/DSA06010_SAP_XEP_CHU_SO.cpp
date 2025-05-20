#include <bits/stdc++.h>
using namespace std;
int n;
string s;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        cin >> n;
        vector<int> res(10,0);
        vector<int> ans;
        for(int i = 1; i <= n; ++i) 
        {
            cin >> s;
            for(int j = 0; j<s.length();j++)
            {
                int digit = s[j]-'0';
                if(res[digit] == 0)
                {
                    res[digit] = 1;
                    ans.push_back(digit);
                }
            }
        }    
        sort(ans.begin(),ans.end());
        for(int i = 0; i< ans.size();i++)
        {
            cout<< ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
