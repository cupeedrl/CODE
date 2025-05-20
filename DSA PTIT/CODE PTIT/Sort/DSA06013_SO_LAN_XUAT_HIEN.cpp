#include<bits/stdc++.h>
using namespace std;
int n,x,k, res[1000005];

int arrange()
{   
    if(res[k] == 0)
    {
        return -1;
    }
    else
        return res[k];
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        memset(res, 0, sizeof(res));
        for(int i = 0; i<n;i++) 
        {
            cin >> x;
            res[x]++;
        }    
        cout << arrange() << endl;
    }   
    return 0;
}
