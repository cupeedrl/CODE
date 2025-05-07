#include<bits/stdc++.h>
using namespace std;
int n,k,sum;
struct spec
{
    int sta, fin;
};
spec straight[100001];
bool cmp(spec x, spec y)
{
    return x.fin < y.fin;
}
int greedy()
{
    sort(straight, straight+n, cmp);
    int sum = 1, k = 0;
    for(int i = 1; i< n; i++)
    {
        if(straight[i].sta >= straight[k].fin)
        {
            sum++;
            k = i;
        }
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    {
        cin>> n;
        for(int i = 0; i<n;i++)
        {
            cin >> straight[i].sta >> straight[i].fin;
        }
        cout<<  greedy() << endl;

    }
    
}