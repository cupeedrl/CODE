#include<bits/stdc++.h>

using namespace std;
int n, x[21];
long long greedy()
{
    long long sum1 =0, sum2=0;
    for(int i = 0; i< n;i++)
    {
        if(i % 2 == 0)
            sum1 = sum1*10+x[i];
        else
            sum2 = sum2*10+x[i]; 
    }
    return sum1+sum2;
}

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i<n;i++) cin >> x[i];
        sort(x, x+n);
        cout << greedy() << endl;
    }
    return 0;
}