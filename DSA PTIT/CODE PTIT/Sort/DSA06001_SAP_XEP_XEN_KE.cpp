#include<bits/stdc++.h>
using namespace std;
int n,a[1005];
long long mod = 1e9+7;


void arrange()
{
    sort(a + 1, a+ n + 1);
    int l = 1;
    int r = n;
    while(l < r)// not take equal sign to keep the mid number
    {
        cout<< a[r]<<" " << a[l]<<" ";
        l++; r--;
    }
    if(n % 2 == 1)
        cout<<a[l];
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        memset(a,0,sizeof(a));
        for(int i = 1; i<=n;i++)
            cin>>a[i];
        arrange();
    }   
    return 0;
}

 