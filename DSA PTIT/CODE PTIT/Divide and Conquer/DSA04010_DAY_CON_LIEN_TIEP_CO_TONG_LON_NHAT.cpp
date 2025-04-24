#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n;
    
        int sum = 0; int ans = 0;
        for(int i = 0; i<n;i++)
        {
            cin >> x;
            sum+= x;
            ans = max(ans,sum);
            if(sum < 0)
                sum = 0;
        }
        cout << ans << endl;
    }
}
