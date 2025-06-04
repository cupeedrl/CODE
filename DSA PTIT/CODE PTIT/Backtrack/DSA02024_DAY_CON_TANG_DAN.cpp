#include<bits/stdc++.h>
using namespace std;
int n,a[15],x[15];
int sz = 0;
string ans[5000];
void add(int pos)
{
    string s="";
    for(int i = 1; i <= pos; i++)
    {
        s += to_string(x[i]);
        if(i < pos)
            s+=" "; // add the space among elements expect the last one.
    }
    ans[sz++] = s;
}
//		  j 
// index  0 1 2 3 4 
// 			i
//			6 3 7 11
void backtracking(int i, int pre)
{
    for(int j = pre+1; j <= n; j++) // choose the element after current one
    {
        if(i > 1 && x[i-1] >= a[j])
            continue;
        x[i] = a[j];
        if(i > 1) // when array > 1 elments;
            add(i);
        if(i<n)
            backtracking(i+1,j);
    }
}

int main()
{
    cin >> n;

    for(int i = 1; i<=n;i++)
    {
        cin >> a[i];
    }
    x[0] = -1;
    backtracking(1,0);
    sort(ans, ans+sz);
    for(int i = 0; i< sz;i++)
    {
        cout<< ans[i]<< endl;
    }
}
