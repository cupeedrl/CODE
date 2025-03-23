#include<bits/stdc++.h>
using namespace std;

void generate(string &s)
{
    int n = s.length();
    int i = n-1;
    while(i >= 0 && s[i]== '1')
    {
        s[i]= '0';
        i--;
    }
    if( i>= 0)
    {
        s[i] = '1';
    }
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        generative(s);
        cout << s << endl;
    }
}
