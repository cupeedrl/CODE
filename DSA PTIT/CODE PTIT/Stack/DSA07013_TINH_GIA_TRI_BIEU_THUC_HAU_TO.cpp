#include <bits/stdc++.h>
using namespace std;

int expr(int x,int y, char sign)
{
    switch (sign) 
    {
        case '+': return x+y;
        case '-': return x-y;
        case '*': return x*y;
        case '/': return x/y;                        
    }
    return 0;
} 
//231*+9- = ((3*1)+2)-9 = -4;
void display() 
{
    string s;
    cin >> s;
    stack<int> st;
    for(int i = 0; i < s.length(); i++) // when iterating, s[i]
    {                               // is automatically consider as char;
        if(s[i] =='+' || s[i] =='-' || s[i] =='*' || s[i] =='/')
        {
            int y = st.top(); st.pop();//push y first when stack [5 9
            int x = st.top(); st.pop(); 
            int res = expr(x,y,s[i]);
            st.push(res);
        }
        else
            st.push(s[i]-'0');
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
