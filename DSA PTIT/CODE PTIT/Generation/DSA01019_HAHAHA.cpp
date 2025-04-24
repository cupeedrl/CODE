#include<bits/stdc++.h>
using namespace std;
int n,k, check; 
string s;
void initial()
{
    s = string(n,'A');
    check = 0;
    // is equivalent to
    // for(int j = 1; j<=n;j++)
    //     s[j] = '0';
}
// A = 0; H = 1, 
int inspect()
{
    if(s[0] !='H' || s[n-1] != 'A')
        return 0;
    for(int i = 0; i<n-1; i++)
    {
        if(s[i] == 'H' && s[i+1]=='H')
            return 0;
    }
    return 1;
}
void generate()
{
    int i = n-1;
    while(i >= 0 && s[i] == 'H')
    {
        s[i] = 'A';
        i--;
    }
    if(i < 0)
        check = 1;
    else
    {
        s[i] = 'H';
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n ; 
        initial();
        while(check == 0)
        {
            if(inspect())
            {
                cout << s << endl;
            }
            generate();
        }
        check = 0;
    }
}
