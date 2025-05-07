#include<bits/stdc++.h>

using namespace std;
int n,k,m, x[100001],y[100001],z[100001],res[100001];
void greedy()
{
    bool found = false;
    int i = 0, j= 0, l = 0;
    while (i < n && j < m && l < k) 
    {
        if(x[i] == y[j]&& z[l] == y[j])
        {
            cout<<x[i] <<" ";
            i++,j++,l++;
            found = true;
        }
        else if(x[i]<y[j]) i++;
        else if(y[j]<z[l]) j++;
        else l++;
    }
	if(!found)
        cout<<"NO\n";
    else
       	cout<<endl;  
    
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>> t;
    while(t--)
    {

        memset(res, 0, sizeof(res));
        
        cin >> n >> m >> k;
        for(int i=0 ;i<n;i++) cin >> x[i];
        for(int i=0 ;i<m;i++) cin >> y[i];
        for(int i=0 ;i<k;i++) cin >> z[i];
      
		greedy();
    }        
    return 0;
}