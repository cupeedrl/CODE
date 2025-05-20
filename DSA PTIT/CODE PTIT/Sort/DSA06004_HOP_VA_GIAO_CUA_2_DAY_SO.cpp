#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],b[100005];
// condition: sorted array
void arrange()
{   //inter: intersection, uni: unnion;
    int inter[min(m,n)], uni[m+n];
    int j = 0,i = 0, x = 0 ,y = 0;
    while(i<n  &&  j < m)
    {
        if(a[i] == b[j])
        {   
            inter[x++] = a[i];
            uni[y++] = a[i];
            i++,j++;
        }
        else if(a[i] < b[j])
        {
            uni[y++] = a[i++];
        }
        else
        {
            uni[y++] = b[j++];
   
        }
    }
    while(i<n)
    {
        uni[y++] = a[i++];
    }
    while(j<m)
    {
        uni[y++] = b[j++];
    }
    for(int i = 0; i<y;i++) cout<< uni[i] << " ";
    cout<<endl;
    for(int i = 0; i<x;i++) cout<< inter[i] << " ";
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        memset(a,0,sizeof(a));
        for(int i = 0; i<n;i++) cin >> a[i];
        for(int j = 0; j<m;j++) cin >> b[j];
        arrange();
    
    }   
    return 0;
}