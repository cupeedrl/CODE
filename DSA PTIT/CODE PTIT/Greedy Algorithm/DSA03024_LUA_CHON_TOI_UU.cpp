#include<bits/stdc++.h>
using namespace std;
int n,k,sum;
struct work
{
    int sta, fin;
};
work task[100001];
bool cmp(work x, work y)
{
    return x.fin < y.fin;
}
int greedy()
{
    sort(task, task+n, cmp);
    int sum = 1, k = 0;
    for(int i = 1; i< n; i++)
    {
        if(task[i].sta >= task[k].fin)
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
            cin >> task[i].sta >> task[i].fin;
        }
        cout<<  greedy() << endl;

    }
    
}