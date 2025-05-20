#include<bits/stdc++.h>
using namespace std;
int n,prime[1000005]; // prime[1000005] is aready full 0, 

void sieve()
{
    memset(prime,1,sizeof(prime));
    prime[0] = prime[1] = 0;
    for(int i = 2; i*i <= 1000005;i++)
    {
       if(prime[i])
       {
            for(int j = i*i; j<=1000005;j+=i)
            {
                prime[j] = 0;
            }
        }
    }    
}
void arrange()
{
    for(int i = 2; i<=n/2;i++)
    {
        if(prime[i] && prime[n-i])
        {
            cout << i << " " << n-i << endl;
            return;
        }
    }
    cout << "-1";
}
int main()
{
    int t;
    cin >> t;
    sieve();
    while(t--)
    {
        cin >> n;
        arrange();
        cout << endl;
    }   
    return 0;
}
