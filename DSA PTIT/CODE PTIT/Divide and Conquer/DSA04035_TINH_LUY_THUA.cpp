#include<bits/stdc++.h>
using namespace std;
int a,b;
const long long mod = 1e9+7;

long long number_pow(int a, int b)
{
	if(b == 1)
		return a % mod;
	long long tmp =  number_pow(a,b/2);
	if(b % 2 == 1)
		return (tmp * tmp * a) % mod;
	else	
		return (tmp * tmp)% mod;
}

int main()
{
    do 
    {
		cin >> a >> b;
        if (a != 0 && b != 0)
		    cout << number_pow(a,b) << endl; 
    }
	while(a != 0 && b != 0);

}

