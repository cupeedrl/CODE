#include<bits/stdc++.h>
int n,check;
int a[1001];
using namespace std;
// for this generation type ex, we shoubld let i start with 1;
void initial()
{
	for(int i = 1; i<=n;i++)    
        cin >> a[i];
    sort(a+1,a+n+1);    
}

void generative()
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
        while(a[i] >=a[j])
        {
            j--;
        }
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
    }
}
int main()
{

    cin >> n; 
    check = 0;
	initial();
    while(check == 0)
    {
        for(int i = 1; i<=n; i++)
        {
            cout <<a[i] <<" ";
        }
        cout << endl; 
        generative(); 
    }
}
