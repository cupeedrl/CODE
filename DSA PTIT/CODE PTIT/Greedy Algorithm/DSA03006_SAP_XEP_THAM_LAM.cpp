#include<bits/stdc++.h>

using namespace std;
int n, x[52],res[52];
bool greedy_sort()
{
    for(int i = 1; i<= n/2;i++)
    {
        if(x[i] != res[n-i+1] && x[i] != res[i])
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i<=n;i++) 
        {
            cin >> x[i];
            res[i] = x[i];
        }  
        sort(res+1, res+n+1);
        if(greedy_sort()) cout <<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}