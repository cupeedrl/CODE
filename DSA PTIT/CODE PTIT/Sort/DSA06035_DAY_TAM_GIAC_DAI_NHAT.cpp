#include <bits/stdc++.h>
using namespace std;

const int MAX = 100005;
int a[MAX], l[MAX], r[MAX],n;

void display() {

    //only use memset with value 0,-1;
    for(int i = 0; i < n ;i++)  l[i] = r[i] = 1; //dynamic programming
    
    for(int i = 1; i < n ;i++)
    {
        if(a[i] > a[i-1]) 
            l[i] = l[i-1]+1;
    }
    for(int i = n-2; i >= 0 ;i--)
    {
        if(a[i] > a[i+1])
            r[i] = r[i+1]+1;
        
    }
    int ans = 0;

    for(int i = 0; i < n ;i++)
    {
        ans = max(ans,l[i]+r[i]-1); //4 78 90 45 23. l=3, r = 3 -> remove duplicate mid pos
    }
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        for(int i = 0; i < n ; i++) cin >> a[i];
        display();
    }
    return 0;
}
