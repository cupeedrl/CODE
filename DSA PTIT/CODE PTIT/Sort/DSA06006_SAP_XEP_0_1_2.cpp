#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],b[100005];

void arrange()
{   
    for(int i = 0; i<n;i++) cout<< a[i]<<" ";
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        memset(a,0,sizeof(a));
        for(int i = 0; i<n;i++) cin >> a[i];
        sort(a,a+n);
        arrange();
    }   
    return 0;
}
