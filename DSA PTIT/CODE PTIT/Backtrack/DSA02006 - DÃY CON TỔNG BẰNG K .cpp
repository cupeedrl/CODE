#include<bits/stdc++.h>
int n,k,check;
int a[1001];
int x[1001];
using namespace std;
void display (int pos) 
{
    check = 1;
    cout<<"[";
    for(int i = 1; i < pos; i++)
    {
        cout<< x[i]<< " ";
    }
    cout<<x[pos]<< "] ";
}
void seek(int i,int preSum, int pre)
{
    for(int j = pre+1; j<= n; j++)
    {
        if(a[j]+preSum > k)
            continue;
        x[i] = a[j];
        if(a[j]+preSum == k)
            display(i);
        else seek(i+1,a[j]+preSum,j);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    	cin >> n >> k;
        for(int i = 1; i<=n;i++) cin >>a[i];
        check = 0;
        sort(a+1,a+n+1);
        seek(1,0,0);
        if(check == 0)
            cout<<"-1";
        cout << endl;
	}
}
