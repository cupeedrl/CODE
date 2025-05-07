#include<bits/stdc++.h>

using namespace std;
int n,k, x[21];
long long greedy(int k)
{
    long long sum1 =0, sum2=0;
    for(int i = 0; i< k;i++)
    {
        if(i<k)
            sum1 = sum1*10+x[i];
        else
            sum2 = sum2*10+x[i]; 
    }
    return abs(sum1-sum2);
}

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i = 0; i<n;i++) cin >> x[i];
        sort(x, x+n);
        cout << greedy(k) << endl;
    }
    return 0;
}