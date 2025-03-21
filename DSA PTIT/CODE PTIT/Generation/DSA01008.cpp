#include<bits/stdc++.h>
using namespace std;
int n,k, check; 
string s;
void initial()
{
    s = string(n,'0');
    check = 0;
    // is equivalent to
    // for(int j = 1; j<=n;j++)
    //     s[j] = '0';
}
int inspect()
{
    return count(s.begin(), s.end(), '1');
}
void generative()
{
    int i = n-1;
    while(s[i] == '1' && i >= 0)
    {
        s[i] = '0';
        i--;
    }
    if(i < 0)
        check = 1;
    else
    {
        s[i] = '1';
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k; 
        initial();
        while(check == 0)
        {
            if(inspect() == k)
            {
                cout << s << endl;
            }
             generative();
        }
        check = 0;
    }
}