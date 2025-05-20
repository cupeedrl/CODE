#include<bits/stdc++.h>
using namespace std;
int n,m,x,res[2000001]; // prime[1000005] is aready full 0, 

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        cin >> n >> m;

        vector<int> ans;
        memset(res,0,sizeof(res));
        for(int i = 0; i<n;i++) 
        {
            cin >> x;
            res[x]++;
            if(res[x] != 0)
                ans.push_back(x);
        }
        for(int i = 0; i<m;i++) 
        {
            cin >> x;
            res[x]++;
            if(res != 0)
                ans.push_back(x);
        }
        sort(ans.begin(), ans.end());
        for(int i = 0; i< ans.size();i++)
            cout << ans[i] <<" ";
        cout<<endl;
    }   
    return 0;
}
