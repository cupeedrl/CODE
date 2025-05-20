#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[100005];
void display()
{
    sort(a,a+n);
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int x = lower_bound(a + j + 1, a + n, k - a[i] - a[j]) - a;
			if(a[x] + a[i]+a[j] == k)
            {
                cout <<"YES\n";
                return ;
            }
		}
	}
    cout <<"NO\n";
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

