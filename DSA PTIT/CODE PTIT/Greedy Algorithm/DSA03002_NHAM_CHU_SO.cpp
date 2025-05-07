#include<bits/stdc++.h>
#define ll long long

using namespace std;

int greedy_convert(string s, char from, char to)
{
    int num = 0;
    for(char &c : s) // for(int i = 0; i< s.length();i++)
                        // {
                        //     char c = s[i];
                        //     if(c == from) c = to;    
    {
        if(c == from) c = to;
        num = num*10 + c-'0';
    }
    return num;
}

int main()
{
    string a, b; cin>>a>>b;
    cout<<greedy_convert(a, '6', '5')+ greedy_convert(b, '6', '5') <<" ";
    cout<<greedy_convert(a, '5', '6')+ greedy_convert(b, '5', '6');
    return 0;
}