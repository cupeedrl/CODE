#include<bits/stdc++.h>
using namespace std;
int n, v;
struct stuff
{
    int weight, value;
};

stuff items[1005];

int napsack()
{
    int dp[1005][1005];
    memset(dp,0,sizeof(dp)); // initial
    // dp[i][j]: consider first i items, backpack capacity j
    for(int i = 1; i<= n;i++) // i = 0; dont need to choose, start with 1
    {
        for(int j = 0; j<= v;j++) 
        {
            dp[i][j] = dp[i-1][j]; // not choose;
            if(j >= items[i].weight ) // capacity is available, choose
            {
                dp[i][j] = max(dp[i][j], dp[i-1][j-items[i].weight]+items[i].value);
            }
        }
    }
    return dp[n][v];
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> v;
        for(int i = 1; i<= n;i++)
        {
            cin>> items[i].weight;
        }
        for(int i = 1; i<= n;i++)
        {
            cin>> items[i].value;
        }
        cout<< napsack() << endl;
    }
    return 0;
}

// Input 
// 1

// 15 10

// 5 2 1 3 5 2 5 8 9 6 3 1 4 7 8

// 1 2 3 5 1 2 5 8 7 4 1 2 3 2 1
	
// Output
// 15