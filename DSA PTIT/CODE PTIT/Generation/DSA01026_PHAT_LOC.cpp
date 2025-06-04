#include <bits/stdc++.h>
using namespace std;

int n, k; 
string str;
int check;

void initial()
{
	str = string(n, '6');
}
void generate() {
    int i = str.length()-1;
    while(str[i] == '8')
    {
        str[i] = '6';
        i--;
    }
    if(i < 0)
    {
        check = 1;
        return;
    }
    else
    {
        str[i] ='8';
    }
}
int inspect(string &str)
{
    if(str[0] == '6' || str[n-1] == '8')
        return 0;
    for(int i = 0; i < n; i++) 
    {
        if(str[i] == '8' && str[i+1] == '8')
            return 0;
    }
    for(int i = 0; i <n-3; i++) 
    {
        if(str[i] == '6' && str[i+1] == '6' && str[i+2] == '6' && str[i+3] == '6')
            return 0;
    }
    return 1;
}
int main() {

        cin >> n;

        initial();

		check = 0;
        while(check == 0)
        {
            generate();
            if(inspect(str) == 1)
            {
            	cout<<str<<endl;
	    }
        }
    return 0;
}    
