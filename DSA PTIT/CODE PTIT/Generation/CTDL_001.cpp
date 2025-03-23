#include<bits/stdc++.h>
using namespace std;
int n,isOdd, a[100];
void check()
{
    if(isOdd == 0)
    {
        for(int i = 1; i <= n; i++) cout<<a[i] <<" ";
        for(int i = n; i > 0; i--) cout<<a[i] <<" ";
        cout <<endl;
    }
    else
    {
        for(int i = 1; i <= n; i++) cout<<a[i] <<" ";
        cout<<"0" << " ";
        for(int i = n; i > 0; i--) cout<<a[i] <<" ";
        cout <<endl;

        for(int i = 1; i <= n; i++) cout<<a[i] <<" ";
        cout<<"1" << " ";
        for(int i = n; i > 0; i--) cout<<a[i] <<" ";
        cout <<endl;
    }
}
int generate()
{
    int i = n;
    while(a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if(i != 0)
    {
        a[i] = 1;
        return 1;
    }
    return 0;
}
int main()
{
    cin >> n; 
    isOdd = n%2;
    n/=2;
    do
    {
        check();
    } 
    while(generate());
}
