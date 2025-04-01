#include<bits/stdc++.h>
#define ll long long

using namespace std;

int x[27], n, k;

void display()
{
    for(int i = 1; i<=k;i++)
    {
        cout<<char('A'+x[i]-1);//char('A' + 2 - 1) = char(65 + 1) = char(66) = 'B'
    }
    cout << endl;
}

void backtrack(int i, int pre)
{
    for(int j = pre; j <= n;j++)
    {
        x[i] = j;
        if(i == k)
        {
            display();
        }
        else    
            backtrack(i+1,j);
    }   
}
int main()
{
    char c; cin>>c>>k;
    n = c-'A'+1;//If c = 'D', then n = 3 + 1 = 4.
    backtrack(1,1);
}