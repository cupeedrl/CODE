#include<bits/stdc++.h>
using namespace std;

int n;
int a[1000001];
long long sum;
long long greedy()
{
        sum = 0;
	for(int i = 0; i<n;i++)
	{
		sum+=a[i]*i;
		sum%=1000000007;
	}
	return sum;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    {
        cin >> n;

        for(int i = 0;i<n; i++)
        {
        	cin >> a[i];
		}
		sort(a,a+n);
		cout<< greedy()<<endl;
    } 

}
