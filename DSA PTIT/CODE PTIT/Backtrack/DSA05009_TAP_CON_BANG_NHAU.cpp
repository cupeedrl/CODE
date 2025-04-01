#include<bits/stdc++.h>
using namespace std;
int n,sum,x[101];
bool acp;


void backtrack(int pre, int preSum)
{
    if(acp)
        return;
    if(preSum == sum)
    {
        acp = true;
        return;
    }
    for(int j = pre+1; j<=n;j++)
    {
        if(x[j] + preSum > sum) // skip the current index equals to sum;
            continue;
        backtrack(j,preSum+x[j]);
    }
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n;

        for(int i = 1; i<=n;i++)
        {
            cin >> x[i];
            sum+= x[i];
        }
        if(sum % 2 == 1)
        {
            cout<<"NO\n";
        }
        else
        {
            sum/=2;
            acp = false;
            backtrack(0,0);
            if(acp)
                cout<<"YES\n";
            else    
                cout<<"NO\n";
        }

    }
}