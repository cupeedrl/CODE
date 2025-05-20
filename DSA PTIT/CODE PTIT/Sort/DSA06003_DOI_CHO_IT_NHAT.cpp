#include<bits/stdc++.h>
using namespace std;
int n,x,a[100005];


int arrange()
{
    int res = 0;
    for(int i = 1; i<=n;i++)
    {
        int mark = i;
        for(int j = i+1 ; j<=n ;j++)
        {
            if(a[j] < a[mark])
            {
                mark = j;
            }
        } 
        if(mark!=i) 
            res++;
        swap(a[i],a[mark]);
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        memset(a,0,sizeof(a));
        for(int i = 1; i<=n;i++)
        {
            cin >> a[i];
        }
        cout << arrange()<<endl;
    }   
    return 0;
}
//selection sort
// 5 8 4 7 2 1 2
// 1 8 4 7 2 5 2
// 1 2 4 7 8 5 2
// 1 2 2 7 8 5 4
// 1 2 2 7 8 5 4
// 1 2 2 4 8 5 7
// 1 2 2 4 5 8 7
// 1 2 2 4 5 7 8

 