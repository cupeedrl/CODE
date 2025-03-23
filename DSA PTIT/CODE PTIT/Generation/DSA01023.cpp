#include<bits/stdc++.h>
int n,k, check;
int a[1001],b[1001];
using namespace std;
// for this generation type ex, we shoubld let i start with 1;
void generate()
{
    int i = k;
    while(i > 0 && a[i] == n-k+i)
    {
        i--;
    }
    if(i == 0) // this is the last configure.
    {
        check = 1;
    }
    else
    {
        a[i]++;
        for(int j = i+1; j<=k;j++)
        {
            a[j] = a[j-1]+1;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        check = 0;

        int res = 0, found = 0;
        for(int i = 1; i<=k; i++)  cin >> b[i];

        for(int j = 1; j<=k;j++) a[j] = j;// use another array to differ from input one.

        while(check == 0 )
        {
            res++;
            int match = 1;
            for(int i = 1; i<=k;i++)
            {
                if(b[i] != a[i])
                {
                    match = 0;
                    break;
                }
            }
            if(match)
            {
                found = 1;
                cout<<res<<endl;
                break;
            }
            generate(); // generate all the permutation 
        }       
    }
}