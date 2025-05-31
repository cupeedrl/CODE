#include <bits/stdc++.h>
using namespace std;

int display(string s) {
    stack<int> st;
    st.push(-1);
    int ans = 0;
    for(int i = 0; i < s.length();i++)
    {
        if(s[i] == '(')
            st.push(i);
        else
        {                
            st.pop();
            if(!st.empty())
            {
                ans = max(ans,i - st.top());
            }
            else
                st.push(i);
        }
    
    }    
    return ans;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        string s;
        cin >> s;
        cout << display(s) << endl;
    }

    return 0;
}
// Với chuỗi:   ( ) ( ( ) ) ) ) ) 
// Chỉ số:      0 1 2 3 4 5 6 7 8
