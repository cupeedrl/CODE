#include <bits/stdc++.h>
using namespace std;

void display() 
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    stack<int> st;
    stack<int> ans;
    for(int i = n-1; i >= 0; i--)
    {
        while(!st.empty()&& a[i] >= st.top()) // find larger elements in st
        {
            st.pop();
        }
        if(!st.empty())
        {
            ans.push(st.top());// if found, push
        }
        else
            ans.push(-1);// else, push -1 
        st.push(a[i]); //push due to the next a[i] will use a[i+1] to compare
    }
    while(!ans.empty())
    {
        cout << ans.top() << " ";
        ans.pop();
    }
    cout << endl;
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
// 4 5 2 25    stack[25,5,4];

// 5 25 25 -1
// ans[-1,25,25,5]