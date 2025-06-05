#include<bits/stdc++.h>
using namespace std;
int a;
long long b;
const long long mod = 1e9+7;

long long number_pow(int a, long long b)
{
	if(b == 0 )	return 1;
 	if(b == 1)	return a;
	
	long long tmp =  number_pow(a,b/2);
	
	if(b % 2 == 1)
		return ((tmp * tmp) % mod * a) % mod;
	else	
		return (tmp * tmp)% mod;
		
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
   	while(true)
    {
		cin >> a >> b;
        if (a == 0 && b == 0)
		    return 0;
		else
			cout << number_pow(a,b) << endl;
    }

}
