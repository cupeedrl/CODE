#include<bits/stdc++.h>
using namespace std;
// LIFO
void display()
{
    int x;
    string s;
    stack<int> st;
    while(cin >> s)
    {
        if(s == "PUSH")
        {
            cin >> x;
            st.push(x);
        }
        else if(s == "POP")
        {
            if(!st.empty()) st.pop();
        }
        else if(s == "PRINT")
        {
            if(st.empty())
                cout<<"NONE" << endl;
            else
            {
                cout<< st.top() << endl;
            }
        }
        cout << endl;
    }
}   

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--)
    {
        display();
    }
}