#include<bits/stdc++.h>
using namespace std;
// LIFO
void display()
{
    string s;
    getline(cin,s);
    stack<int> st;
    for(int i = 0; i < s.length();i++)
    {
        if(s[i] != ')')
            st.push(s[i]);
        else
        {
            bool check = false;
            while(!st.empty())
            {
                int c = st.top(); st.pop();
                if (c == '+' || c == '-' || c == '*' || c == '/')
                   check = true; 
                if(c == '(')
                    break;
            }
            if(check == false)
            {
                cout<<"Yes"<<endl; 
                return;
            }
        }
    }
    cout <<"No" << endl;
}   

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    cin.ignore(); // remove '\n' to input string.
    while(t--)
    {
        display();
    }
}