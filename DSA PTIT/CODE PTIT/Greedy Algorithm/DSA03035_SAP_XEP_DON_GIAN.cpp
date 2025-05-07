#include<bits/stdc++.h>
using namespace std;
struct work
{
    int sta,fin;
};
work task[1005];
int n,t;

bool cmp(work x, work y)
{
    return x.fin < y.fin;
}
int greedy()
{
    if (n == 0) return 0;
    int sum = 1, k = 0;// sum = 1, always have a works have already start.
    sort(task, task+n,cmp);

    for(int j = 1; j<n;j++)
    {
        if(task[j].sta >= task[k].fin)
        {
            sum++;
            k = j;
        }
    }
    return sum;
}
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n;i++) cin >> task[i].sta;
        for(int i = 0; i < n;i++) cin >> task[i].fin;
        cout << greedy() << endl;

        
    }
}