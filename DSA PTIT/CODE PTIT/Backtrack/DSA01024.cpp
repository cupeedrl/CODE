#include<bits/stdc++.h>
using namespace std;
int n, k, check;
string names[30], res[30];
int a[15];
int new_size = 0;
// generate by using backtrack
void initial()
{
    for(int j = 0; j<k; j++)
    {
        a[j] = j;
    }
}
void generate()
{
    int i = k-1;

    while(i >= 0 && a[i] == n-k+i)
    {
        i--;
    }
    if(i<0)
    {
        check = 1;
    }
    else
    {
        a[i]++;
        for(int j = i+1; j<k;j++)
        {
            a[j] = a[j-1]+1;
        }
    }
}
int main()
{
    cin >> n >> k;

    for(int i = 0; i<n; i++)
    {
        cin>> names[i];
        
    }
    // cin >> nhap 1 tu
    // getline >> nhap nhieu tu co dau cach
    sort(names, names+n); // sort tu names[0 -> n-1];
 
    res[new_size++] = names[0];
    for(int i = 1; i < n; i++)
    {
        if(names[i] != names[i-1])
        {
            res[new_size++] = names[i];
        }
    }
    n = new_size;
    initial();
    check = 0;
    while(check == 0)
    {
        for(int i = 0; i<k;i++)
        {
            cout<<res[a[i]] << " ";
        }
        cout << endl;
        generate();
    }

}
