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
        if(s == "push")
        {
            cin >> x;
            st.push(x);
        }
        else if(s == "pop")
        {
            if(!st.empty()) st.pop();
        }
        else if(s == "show")
        {
            if(st.empty())
                cout<<"empty" << endl;
            else
            {
                stack<int> tmp = st;
                vector<int> res;
                while(!tmp.empty())
                {
                    res.push_back(tmp.top());
                    tmp.pop();
                }
                // Reserve due to LIFO 
                reverse(res.begin(),res.end());
                for(auto i: res)
                    cout << i <<" ";
            }
        }
        cout << endl;
    }
}   
   

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; 
    // cin >> t;
    while(t--)
    {
        display();
    }
}
