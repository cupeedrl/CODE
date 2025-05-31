#include <bits/stdc++.h>
using namespace std;
// string(5, 'A') create "AAAAA"
bool sign(char c)
{
    return (c == '+' ||c == '-' ||c == '*' ||c == '/' );
} 
void display() 
{
    string s;
    cin >> s;
    stack<string> st;
    for(int i = s.length()- 1; i >= 0; i--) // when iterating, s[i]
    {                               // is automatically consider as char;
        string tmp = string(1,s[i]);
        if(sign(s[i]))
        {
            string x = st.top(); st.pop();
            string y = st.top(); st.pop();
            string expr = "(" + x + tmp + y + ")"; // expression
            st.push(expr);
        }
        else
            st.push(tmp);
    }
    cout << st.top() << endl;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        display();
    }
    return 0;
}
