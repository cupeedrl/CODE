#include <bits/stdc++.h>
using namespace std;
// string(5, 'A') create "AAAAA"
int sign(int x, int y, char c)
{
    switch(c)
    {
        case '+': return x+y;
        case '-': return x-y;
        case '*': return x*y;
        case '/': return x/y;        
    }
    return 0;
}
void display() 
{
    string line;
    getline(cin, line);
    stringstream ss(line);
    string s;
    stack<int> st;

    while (ss >> s)
    {
        if (s == "+" || s == "-" || s == "*" || s == "/")
        {
            int y = st.top(); st.pop();
            int x = st.top(); st.pop();
            st.push(sign(x, y, s[0]));
        }
        else
        {
            st.push(stoi(s)); // an toàn nếu s là số
        }
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
