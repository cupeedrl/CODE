#include<bits/stdc++.h>
using namespace std;
int n,x;
int a[10005],res[10005];

bool cmp(int a, int b)
{
    if(res[a] != res[b])
        return res[a] > res[b];
    return a < b; 
}
void arrange()
{
    sort(a,a+n,cmp);
    for(int i = 0; i < n; i++)
    {    
        cout << a[i] << " ";  
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
            res[a[i]]++; 
        }    
        arrange();
        memset(res,0,sizeof(res));
    }   
    return 0;
}
