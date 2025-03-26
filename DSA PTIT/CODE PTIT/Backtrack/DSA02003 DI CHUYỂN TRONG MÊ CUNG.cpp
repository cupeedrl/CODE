#include<bits/stdc++.h>
using namespace std;
int maze[11][11], n;
bool check;
void Try(int i, int j, string road)
{
    if(!maze[i][j])
    {
        return;
    }
    if(i == n && j == n )
    {
        cout << road <<" " ;
        check = 1;
        return; 
    }
    if(i+1 <= n) Try(i+1, j, road+ 'D');

    if(j+1 <= n) Try(i, j+1, road+ 'R');
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i<=n;i++)
        {
            for(int j = 1; j<=n;j++)
            {
                cin >> maze[i][j];
            } 
        }        
        check = 0;
        Try(1,1,"");
        if(!check)
            cout<<"-1"; 
        cout<<endl;
    }
}
