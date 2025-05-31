#include <bits/stdc++.h>
using namespace std;
// string(5, 'A') create "AAAAA"

void display() 
{
    string s;
    getline(cin,s);

    stringstream ss(s); // separate whole string into phrases 
    stack<string> st;
    string word;
    while(ss >> word) // assign ss to word
    {
        st.push(word); // push each phrase into stack;
    }
    while(!st.empty())
    {
        cout << st.top();
        st.pop();
        if(!st.empty())
        {
            cout<<" ";
        }
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
