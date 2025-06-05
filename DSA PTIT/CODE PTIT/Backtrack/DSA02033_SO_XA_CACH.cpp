#include<bits/stdc++.h>
#define ll long long

using namespace std;

int x[11], n;


bool isValid()
{
    for(int i=1; i<n; ++i) 
		if(abs(x[i]-x[i+1]) <= 1)
			return false; 
	return true;		
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; ++i) x[i] = i;
        do
        {
        	if(isValid())
        	{
        		for(int i=1; i<=n; ++i) cout<< x[i];
        		cout<<endl;
		}
	} while(next_permutation(x+1, x+n+1)); // permutate since 1234;
    }
}
