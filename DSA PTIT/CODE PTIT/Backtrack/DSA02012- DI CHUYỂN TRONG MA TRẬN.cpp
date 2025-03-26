#include<bits/stdc++.h>
int matrix[101][101];
int m,n,cnt;
using namespace std;

void path(int i,int j)
{
    if(i > m || j > n)
    {
        return;
    }
    if(i == m && j == n)
    {
        cnt++;
        return;
    }
    else
    {
        path(i,j+1);
        path(i+1,j);
    } 
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    	cnt = 0;
    	cin >> m >> n;
        for(int i = 1; i<=m;i++)
            for(int j = 1; j<=n;j++)  
                cin >> matrix[i][j];
        path(1,1);
		cout<<cnt<<endl;; 
	}
}
