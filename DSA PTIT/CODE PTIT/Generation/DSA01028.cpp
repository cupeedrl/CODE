#include <bits/stdc++.h>
using namespace std;

int n, k,res[1001], a[1001];
int check;

void initial()
{
    for(int j = 1; j<=k;j++)
    {
        a[j] =j;
    }
}
void generate() {
    int i = k;
    while(i>=1 && a[i] == n-k+i )
    {
        i--;
    }
    if(i == 0)
    {
        check = 1;
        return;
    }
    else
    {
        a[i]++;
        for(int j = i+1; j<=k;j++)
        {
            a[j] =a[j-1]+1;
        }
    }
}

int main() {
        cin >> n >> k;
        int tmp[1001];
        for(int i = 1; i<=n;i++)
        {
            cin >> tmp[i];
        }
        sort(tmp+1, tmp+n+1);
        
        int new_n = 1;
        res[new_n] = tmp[1];    // assign the first element
        for(int i = 2; i<=n;i++)
        {
           if(tmp[i] != tmp[i-1])
                res[++new_n] = tmp[i];  
        }
        n = new_n;
        check = 0;
        initial();

        while(check == 0)
        {
            for(int i = 1; i <=k; i++)  cout<<res[a[i]]<< " ";
            generate();
            cout <<endl;
        }

    return 0;
}    
