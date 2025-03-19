#include<bits/stdc++.h>
using namespace std;
int n, k, a[1001], B[1001], cnt;
void display (int size) 
{
    for(int i = 1; i <= size; i++)
    {
        if(B[i]) // if B[i] == 1;
            cout << a[i] <<" ";
    }
    cout<<endl;
    cnt++;
}
void find(int i, int Sum)
{
    for(int j = 0; j<=1; j++)
    {
        B[i] = j;
        if(Sum+ a[i]*j == k) display(i);
        else if(i<n) find(i+1,Sum+a[i]*j);
    }
}
int main()
{

    cin >> n >> k;
    for(int i = 1; i<=n;i++)
    {
        cin >> a[i];
    }
    find(1,0);
    cout << cnt;
}