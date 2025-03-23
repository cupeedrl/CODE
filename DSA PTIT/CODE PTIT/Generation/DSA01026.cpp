#include <bits/stdc++.h>
using namespace std;

int n, k,check; 
string str;

void initial()
{
	for(int i = 0; i<k; i++)
    {
        str[i] = 'A' + i;
    }
}
void generate() 
{   
    int i = n;
    while(i>= 0 && str[i] == n - k + i)
    {
        i--;
    }
    if(i < 0)
    {
        check = 1;
        return;
    }
    else
    {
        str[i]++;
        for(int j = i+1 ; j < n; j++)
        {
            str[j] = str[j-1]+1;
        }
    }
}

int main() {

    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        initial();
		check = 0;
        while(check == 0)
        {
            cout<<str;
            generate();
            
        }        
    }
    return 0;
}    
