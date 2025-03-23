#include<bits/stdc++.h>
int n,check;
int a[1001];
using namespace std;
// for this generation type ex, we shoubld let i start with 1;

void initial()
{
    for(int j = 1; j<=n;j++)
        a[j] =j;
}
void generate()
{
    int i = n-1;
    while(i > 0 && a[i] >= a[i+1])
    {
        i--;
    }
    if(i == 0) // this is the last configure.
    {
        check = 1;
    }
    else
    {
        int j = n;
        while(a[i] >= a[j])
        {
            j--;
        }
        swap(a[i],a[j]);
        int l = i+1, r = n;
        while(l<r)
        {
            swap(a[l],a[r]);
            l++,r--;
        }
    }
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        cin >> n ;
        check = 0;
        initial();
        while(check == 0)
        {
            for(int j = 1; j<=n; j++)
            {
                cout <<a[j];
            }
            cout <<" ";
            generate(); 
        }
        cout << endl; 
    }
}
