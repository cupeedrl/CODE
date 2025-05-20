#include<bits/stdc++.h>
using namespace std;

void display()
{
    int n,x,freq = 0;
    cin >> n;
    map<int, int> mp;
    pair<int,int> p;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    for(auto i : mp) // each i is 1 map, include first, second.
    {
        if(i.second > freq)
        {
            freq = i.second;
            p = i;  //store the largest freq of element and its value;
        }
    }
    if(p.second > float(n/2))
        cout << p.first << endl;
    else
        cout <<"NO\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t; cin >> t;
    while(t--)
    {
        display();
    }
}

