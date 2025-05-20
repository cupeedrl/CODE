#include<bits/stdc++.h>
using namespace std;
int n,x,a[100005];
long long mod = 1e9+7;
bool cmp(int a, int b)
{
    return abs(x-a) < abs(x-b);
}
  
void arrange()
{
    for(int i = 1; i<=n;i++)
        cin>>a[i];
    stable_sort(a+1,a+n+1,cmp);
    for(int i = 1; i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        memset(a,0,sizeof(a));
        arrange();
    }   
    return 0;
}

 