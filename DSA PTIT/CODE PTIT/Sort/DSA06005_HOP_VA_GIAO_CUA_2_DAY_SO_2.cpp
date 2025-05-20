#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],b[100005];
// condition: sorted array
// vector method
void arrange()
{   //inter: intersection, uni: unnion;
    vector<int> inter, uni;
    int j = 0,i = 0;
    while(i<n  &&  j < m)
    {
        if(a[i] == b[j])
        {   
            inter.push_back(a[i]);
            uni.push_back(a[i]); 
            i++,j++;
        }
        else if(a[i] < b[j])
        {
            uni.push_back(a[i++]);
        }
        else
        {
            uni.push_back(b[j++]); 
        }
    }
    while(i<n)
    {
        uni.push_back(a[i++]);
    }
    while(j<m)
    {
        uni.push_back(b[j++]); 
    }

    for(int i = 0; i<uni.size();i++) cout<< uni[i] << " ";
    cout<<endl;
    for(int i = 0; i<inter.size();i++) cout<< inter[i] << " ";
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
        sort(a,a+n);
        sort(b,b+m);
        arrange();
    }   
    return 0;
}
