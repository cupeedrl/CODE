#include<bits/stdc++.h>
using namespace std;

void display()
{
    int n;
    cin >> n;
    int a[n+1];
    map<int, int> mp;
    pair<int, int> p;
    // using pair to store both value and its position.
    // must to initial i = 1 -> n to avoid special case: a[0] = 0
    // we wont know whether a[0] doesn't appear or apprear at 0 index;
    p.second = 1e9; 
	for (int i = 1; i <= n; i++)
	{
        cin >> a[i];
        if(mp[a[i]] == 0)
            mp[a[i]] = i; // store the first appearance
        else if(p.second > mp[a[i]]) // if the number has appeared
        {
            p.first = a[i];
            p.second = mp[a[i]]; // assign its positions;
        }
	}   
    if(p.second != 1e9)
        cout <<p.first << endl;
    else
        cout << "NO" << endl;
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

// 10 2 5 3 4 8 7 6 2