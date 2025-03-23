#include<bits/stdc++.h>
using namespace std;

string s;

void generate()
{
    int i = s.length()-1;
    while(i>=0 && s[i] == '0')
    {
        s[i] = '1';
        i--;
    }
    if(i<0)
        return;
    else
    {
        s[i] = '0';
    }
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        getline(cin,s);
        generate();
        cout<<s<<endl;
    }
}