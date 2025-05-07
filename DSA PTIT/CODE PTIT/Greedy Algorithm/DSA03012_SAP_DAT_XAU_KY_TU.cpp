#include<bits/stdc++.h>

using namespace std;
int n, x[256];
string s;
void greedy()
{

    for(int i = 0; i< s.length();i++)
    {
        x[s[i]]++;   
    }
    int max_char = 0;
    for(int i = 0; i<256;i++)
    {
        if(max_char < x[i])
            max_char=x[i];
    }
    if(max_char<= (s.length()+ 1)/2) cout <<"1\n"; 
    else    
        cout<<"-1\n";

}
1 0 1 0 1 0 1 

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        cin >> s;
        greedy();
        for (int i = 0; i < 256; i++) 
            x[i] = 0; // reset after 1 testcase

    }
    return 0;
}