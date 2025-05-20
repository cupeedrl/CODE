#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[100005];
void display()
{
    for(int i = 0; i <=n-k; i++)
    {
        int j = 1;
        int max_value = a[i];
        while(j < k)
        {
            if(max_value < a[i+j])
                max_value = a[i+j];
            j++;
        }
        cout << max_value <<" ";
    }
    cout << endl;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin>> n >> k;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        display();
    }
}
