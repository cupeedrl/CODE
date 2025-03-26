#include<bits/stdc++.h>
using namespace std;
int n, a[11];

void handle(int a[], int n)
{
	cout <<"[";
		for(int i = 0; i<n; i++)
		{
			if(i == n-1)
				cout<< a[i] << "]\n";
			else
				cout<< a[i] << " ";
		}
		if(n == 1)
			return;
		int res[10];
		for(int i = 0; i<n-1; i++)
		{
			res[i] = a[i] + a[i+1];
		}
	handle(res,n-1);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i <n;i++)   
			cin >> a[i];
        handle(a,n);
    }
}
