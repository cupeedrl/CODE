#include<bits/stdc++.h>
int n;
int a[1001];
using namespace std;
// for this generation type ex, we shoubld let i start with 1;
//Eg: 1 2 4 9 8 6 5 2;
//<-> 1 2 5 9 8 6 4 2;
// => 1 2 5 2 4 6 8 9;
void generate()
{
    int i = n-1;
    while(i > 0 && a[i] >= a[i+1])
    {
        i--;
    }
    if(i == 0) 
    {
        for(int j = n; j>=1;j--)
            cout << a[j] <<" ";
        cout << endl;
        return;
    }
    else
    {
        int j = n;
        while(a[i] > a[j])
            j--;
        swap(a[i], a[j]);
        int l = i+1, r = n;
        while(l<r)
        {
            swap(a[l],a[r]); //== resverse(a+i+1, a+n+1);
            l++;
            r--;
        }
    } 
    for(int j = 1; j<=n;j++)
        cout << a[j] <<" ";
    cout << endl; 
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        cin >> n ;
        for(int i = 1; i<=n; i++)
        {
            cin >> a[i];
        }

        generate();
        
    }
}
