#include<bits/stdc++.h>
using namespace std;
int n,m, a[1000005],res[10000005];

void seek()
{
    sort(a,a+n);
    int i = 1;
    while(a[i] == a[0] && i < n)
    {
        i++;
    }
    if(i == n)
        cout<<"-1" << endl;
    else
        cout<<a[0] <<" " << a[i] << endl;
   
}
// 1 1 1 1 1 2 3 4
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
        }    
        seek();
    }   
    return 0;
}
