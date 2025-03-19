#include<bits/stdc++.h>
int n,k;
int a[1001];
using namespace std;
void generative()
{
    int i = k;
    while(i > 0 && a[i] == n-k+i)
    {
        i--;
    }
    if(i == 0) // is the largest subset, back to the head
    {
        for(int j = 1; j<=k;j++)
        {
            a[j] = j;
        }
    }
    else
    {
        a[i]++;
        for(int j = i+1; j <= k; j++)
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
        for(int i = 1; i<= k; i++)
        {
            cin >> a[i];
        }
        generative();
        for(int j = 1; j<=k;j++)
            cout << a[j] <<" ";
        cout << endl; 
    }
}