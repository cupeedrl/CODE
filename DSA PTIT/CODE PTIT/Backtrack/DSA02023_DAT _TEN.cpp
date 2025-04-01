#include<bits/stdc++.h>
using namespace std;
int n,k,x[15];
string name[30];
void display()
{
    for(int i = 1; i<=k; i++)
    {
        cout<<name[x[i]]<< " ";
    }
    cout << endl;
}
void backtracking(int i)
{
    for(int j = x[i-1]+1; j<=n-k+i;j++)
    {
        x[i] = j;
        if(i == k)
        {
            display();
        }
        else
            backtracking(i+1);
    }
}

int main()
{
    cin >> n >> k;

    for(int i = 1; i<=n;i++)
    {
        cin >> name[i];
    }
    sort(name+1, name+n+1);
    int new_size = 1;
    for(int i = 2; i<=n; i++)
    {
        if(name[i] != name[i-1])
            name[++new_size] = name[i];// the first elment was always taken.
    }
    x[0] = 0;
    n = new_size;
    backtracking(1);
}
//input: 
//6 2
//
//DONG TAY NAM BAC TAY BAC
//output:
//BAC DONG
//
//BAC NAM
//
//BAC TAY
//
//DONG NAM
//
//DONG TAY
//
//NAM TAY