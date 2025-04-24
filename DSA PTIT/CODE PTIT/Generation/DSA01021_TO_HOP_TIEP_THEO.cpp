#include<bits/stdc++.h>
using namespace std;

// 1 2 4
// 1 3 5
int n,k,a[1001];

int generate()
{
    int i = k;
    while(i>0 && a[i] == n-k+i)
    {
        i--;
    }
 	if (i > 0)
	{
		a[i]++;
    	for(int j = i+1; j<=k;j++)
    	{
        	a[j] = a[j-1]+1;
   		}
   		return 1;
	}
	return 0;
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
    	int res[1001] ={};
        cin >> n >> k;
        int cnt = 0;
        for(int i = 1; i<=k;i++)
        {
            cin >> a[i];
            res[a[i]] = 1;
        }
        if(generate() == 1)
        {
	    	for(int i = 1; i<=k;i++)
	    	{
	        	if(res[a[i]] == 0)
	            	cnt++;
	    	}
	   		cout<<cnt<<endl;
		}
		else
		{
			cout<<k<<endl;
		}
        
    }
}
