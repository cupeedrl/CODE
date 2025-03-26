#include<bits/stdc++.h>
int res,n,chess[20];
int mark[20];
int dx[20],dn[20];
using namespace std;
void Try(int i)
{
    for(int j = 1; j<=n;j++)
    {
        if(chess[j] == 0 && dx[i-j+n] == 0 && dn[i+j-1] == 0)
        {
            mark[i] = j;
            chess[j] = dx[i-j+n] = dn[i+j-1] = 1;
            if(i == n)
            {
            	res++;
			}
			else
            	Try(i+1);
        	chess[j] = dx[i-j+n] = dn[i+j-1] = 0; 
        }    
           
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    	res = 0;
    	cin >> n;
    	Try(1);
        cout<< res<<endl ; 
	}
}
