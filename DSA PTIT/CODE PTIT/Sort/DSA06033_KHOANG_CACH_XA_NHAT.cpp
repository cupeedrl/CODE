#include<bits/stdc++.h>
using namespace std;

int n;
void display(pair<int,int> a[])
{
    sort(a,a+n); // sort by a.first
    //A[] = [34, 8, 10, 3, 2, 80, 30, 33, 1]
    //after sort: [(1,8),(2,4),(3,3),(8,1),(10,2),(30,6),(33,7),(34,0),(80,5)]

    int m = a[0].second, k = a[0].first;
    // m: the min index has been browsing
    int ans = - 1;
    for(int i = 1; i < n; i++)
    {
        if(a[i].first > k)
        {
            ans = max(ans, a[i].second- m);
        }
        if(a[i].second < m) // if have a value has smaller index
        {
            m = a[i].second;
            k = a[i].first;
        }
    }
    cout << ans << endl;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin>> n;
        pair<int,int> a[n];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        display(a);
    }
}