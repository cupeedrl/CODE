#include<bits/stdc++.h>
using namespace std;
int a[1001], dp[1001];
int n;
int dynamic_programm() // LIS
{
    int len = 0;
    for(int i = 1; i <= n; i++) 
    {
        int pos = len+1; // if not found then add at the end;  
        int l = 1, r = len;
        while(l <= r)
        {
            int mid = (l+r)/2;
            if(a[i] <= dp[mid]) //find the pos where a[i] is min
            {   
                pos = mid; 
                r = mid-1; 
            }
            else
                l = mid+1;
        }    
        dp[pos] = a[i]; 
        if(pos > len)
            len = pos;
    }
    return len;
}
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++) 
    {
       cin >> a[i];
    }
    cout << dynamic_programm() << endl;
    
}