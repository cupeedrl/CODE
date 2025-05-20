#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[5005];
void display()
{
    sort(a,a+n);
    int ans = 0;
    for(int i = 0; i <n; i++)
    {
        for (int j = i + 1; j < n; ++j) 
        {
            int x = lower_bound(a+j+1,a+n, k-a[i] -a[j])- a; // a + j - a = 2
            // lower_bound_ return pos not value
            ans+= x-j-1; // x not be choose, so -1 to remmove x;

        } 
    }    
    cout << ans << endl;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin>> n >> k;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        display();
    }
}
