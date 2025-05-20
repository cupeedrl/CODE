#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],b[100005];
void arrange()
{   
    int l = 0;
    int r = n-1;

    for(int i = 0; i < n - 1; i++) 
    {
        if(a[i] > a[i+1])
        {
            l = i; 
            break;
        }     
    }
    if (is_sorted(a, a + n)) 
    {
        cout << "0 0\n";
        return;
    }

    for(int i = n - 1; i > 0; i--) 
    {
        if(a[i-1] > a[i])
        {
            r = i; 
            break;
        }
            
    }
// 1 6 20 30 25 5 35 32 31 50 40 60 78
//         |l                 r|
// 1 6 20 30 5 25 31 32 35 50 40 60 78
//after determine l,r, process the wrong position(if have)
    int max = *max_element(a+l,a+r+1);
    int min = *min_element(a+l,a+r+1);
    
    for(int i = 0; i < l; i++) 
    {
        if(a[i] > min)
        {
            l = i; 
            break;
        }
    }
    for(int i = n - 1; i > r; i--) 
    {
        if(max > a[i])
        {
            r = i; 
            break;
        }
    }
    cout << l+1 << " " << r+1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i<n;i++) cin >> a[i];
        arrange();
    }   
    return 0;
}

