#include<bits/stdc++.h>
int n;
int a[1001],used[1001];

using namespace std;
// for this generation type ex, we shoubld let i start with 1;
void generate(int i,string &s)
{
   for(int j = 1; j<= n; j++)
   {
	if(used[j] == 0)
	{
		a[i] = j;
		used[j] = 1;
		if(i == n)
		{
			for(int k = 1; k<=n;k++)
			{
				cout<<s[a[k]-1];
			}
			cout<<" ";
		}
		else
			generate(i+1,s);
		used[j] = 0;	
	}
   }
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
    	string s;
		getline(cin,s);
		sort(s.begin(), s.end());
		n = s.length();
		for (int i = 1; i <= n; i++) 
		{
    		used[i] = 0;
		}
		generate(1,s); // generate all the permutation	
		cout<<endl; 
	}
}
