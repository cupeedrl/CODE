#include<bits/stdc++.h>
using namespace std;
int money,sum, cash[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int cnt;
int greedy()
{
    for(int i = 9; i>= 0;i--)
    {
       while(money>=cash[i] && money >= 0 )
       {
            money-=cash[i];
            cnt++; 
       }
    }    
    return cnt;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    {
        cnt = 0;
        cin >> money;
        cout << greedy() << endl;
    }

}