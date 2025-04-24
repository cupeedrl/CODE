#include <bits/stdc++.h>
using namespace std;

int n, k,check; 
string str;

void initial()
{
	str = string(k, ' '); // must allocate to avoid 
                        // out-of-bounds memory access
	for(int i = 0; i<k; i++)
    {
        str[i] = 'A' + i; // syntax: string variable_name(size, character);
    }
}
void generate() 
{   
    int i = k-1;
    while(i>= 0 && str[i] == 'A'+ n - k + i)
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
        for(int j = i+1 ; j < k; j++)
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
            cout<<str << endl;
            generate();
            
        }        
    }
    return 0;
}    
