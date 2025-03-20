#include<bits/stdc++.h>
int n,k,check;
int a[1001];
using namespace std;
// for this generation type ex, we shoubld let i start with 1;

void initial()
{
    for(int j = 1; j<=k;j++)
        a[j] =j;
}
void generative()
{
    int i = k;
    while(i > 0 && a[i] == n-k+i)
    {
        i--;
    }
    if(i == 0) // this is the last configure.
    {
        check = 1;
    }
    else
    {
        a[i]++;
        for(int j = i+1; j<=k; j++)
        {
            a[j] = a[j-1]+1;
        }
    }
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        cin >> n >> k;
        check = 0;
        initial();
        while(check == 0)
        {
            for(int j = 1; j<=k; j++)
            {
                cout <<a[j];
            }
            cout <<" ";
            generative(); 
        }
        cout << endl; 
    }
}