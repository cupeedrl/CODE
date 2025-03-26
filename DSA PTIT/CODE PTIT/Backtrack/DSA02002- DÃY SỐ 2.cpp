#include<bits/stdc++.h>
using namespace std;
int n, a[11];

void handle(int a[], int n)
{
    if(n == 1) // stop when there are only 1 elment left
    {
        cout <<" [" << a[0] << "]";
        return;
    }
	int res[10];
	for(int i = 0; i<n-1; i++)
	{
		res[i] = a[i] + a[i+1];
	}
    handle(res,n-1);  
    cout <<" [";
    for(int i = 0; i<n; i++)
    {
        if(i == n-1)
            cout<< a[i] << "]";
        else
            cout<< a[i] << " ";
    }
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
