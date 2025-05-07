#include<bits/stdc++.h>

using namespace std;
int n,s,m, x[256];
void greedy()
{
    if(m>n)
    {
        cout<<"-1\n";
        return;
    }
    int need = m*s;
    int buy_day = 0;
    int available_day = s-(s/7);
    while(need>0 && buy_day < available_day)
    {
        buy_day++;
        need-=n;
    }
    if(need > 0) cout<<"-1\n"; //shop but not be allowed to buy more->die
    else    
        cout<<buy_day<<"\n";
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        cin >> n >> s >> m;
        greedy();
    }
    return 0;
}