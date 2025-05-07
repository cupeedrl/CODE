#include<bits/stdc++.h>
using namespace std;

int dynamic_programm(string s1, string s2)
{
    int n = s1.size();
    int m = s2.size();
    int ans[n+1][m+1]; 

    for(int i = 0; i <= n; i++) // take equal sign cause the first row,col
    {                           // must be used to store 000000
        for(int j = 0; j <= m; j++)
        {
            if( i == 0 || j == 0)
                ans[i][j] = 0;
            else
            {
                if(s1[i-1] == s2[j-1])
                    ans[i][j] = ans[i-1][j-1] + 1;
                else
                    ans[i][j] = max(ans[i][j-1],ans[i-1][j]);
            }
        } 
    }
    return ans[n][m];
}
int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        string s1,s2;
        cin >> s1 >> s2;

        cout << dynamic_programm(s1,s2) << endl;
    }
}