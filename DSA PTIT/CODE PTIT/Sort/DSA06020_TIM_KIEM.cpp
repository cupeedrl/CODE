#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[10005];

// int seek(int k)
// {
//     bool ans = binary_search(a,a+n,k); // binary_search just return 0 or 1
//     if(ans == true)
//         return 1;
//     return -1;
// }
int seek_handle(int k)
{
    int l = 0, r = n-1;
    while(l<=r)
    {
        int m = (l+r)/2;
        if(k < a[m])
        {
            r = m-1;
        }
        else if(k > a[m])
        {
            l = m+1;
        }
        else
            return 1; // seek end when find a[mid] = k;
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        cin >> n >> k;
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }    
        cout<< seek_handle(k) << endl;
        
    }   
    return 0;
}
