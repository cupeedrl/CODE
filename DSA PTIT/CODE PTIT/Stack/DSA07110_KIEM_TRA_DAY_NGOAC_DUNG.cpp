#include <bits/stdc++.h>
using namespace std;
void display() 
{
    string s; cin >> s;
    stack<char> st;
    for(int i = 0; i < s.length(); i++)
    {
        if (s[i] == ')' && !st.empty() && st.top() == '(')
            st.pop();
        else if (s[i] == ']' && !st.empty() && st.top() == '[')
            st.pop();
        else if (s[i] == '}' && !st.empty() && st.top()== '{')
            st.pop();
        else
            st.push(i);            
    }
    if(st.empty()) // satisfy the requirement
        cout << "YES"<< endl;
    else
        cout << "NO"<< endl;
}
// eg. {()]}   stack[ "{","]","}",;
int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        display();
    }
    return 0;
}
