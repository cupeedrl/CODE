#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[10000005];
// required: o log n
int binary_search(int l, int r, int k) {
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == k) return m;
        else if (a[m] < k) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

int seek(int l, int r, int k)
{
    int j = l;
    while(a[j] < a[j+1] && j<=r ) j++; // determine rotated pos
    int ans = binary_search(l,j+1,k);   // seek in left pos
    if(a[ans] == k)
        return ans;
    if (ans != -1) // not found -> no cout
        return ans;
    else
        return binary_search(j, r, k);   // seek in side pos
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        cin >> n >> k;
        for(int i = 1; i <= n; i++) 
        {
            cin >> a[i];
        }    
        cout<< seek(1,n,k) << endl;
    }   
    return 0;
}
