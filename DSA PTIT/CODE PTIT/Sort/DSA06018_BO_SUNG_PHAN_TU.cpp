#include<bits/stdc++.h>
using namespace std;
int n,a[1000005];

int arrange()
{
    sort(a,a+n);
    int ans = 0;
    for(int i = 1; i < n; i++)
    {
        int sum = a[i] - a[i-1];
        if(a[i] != a[i-1])
        {
            ans+=sum-1;
        }  
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << arrange() << endl;
    }   
    return 0;
}
