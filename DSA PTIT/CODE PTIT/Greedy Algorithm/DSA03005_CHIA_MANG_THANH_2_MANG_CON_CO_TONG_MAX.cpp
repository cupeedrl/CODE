#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    	int n,k;
        cin >> n >> k;
        int a[n+1];
        int ans =0;
        for(int i = 1; i<=n;i++) cin >> a[i];
        sort(a+1,a+n+1);
		if(k < n-k)
		{
			for(int i = 1; i<=k;i++) ans-=a[i];
			for(int i = k+1; i<=n;i++) ans+=a[i];
		}
		else
		{
			for(int i = 1; i<=n-k;i++) ans-=a[i];
			for(int i = n-k+1; i<=n;i++) ans+=a[i];
		}	
        cout << ans<< endl;
    }
    return 0;
}
