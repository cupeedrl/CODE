#include <bits/stdc++.h>
using namespace std;

int a[1001];
int n,k;
bool stop;
void init()
{
	for(int i = 1; i<= n; i++) // if com -> replace n by k;
	{
		a[i] = i;  	// if bin -> replace i by 0;
	}
}
void display()
{
	for(int i = 1; i<= n; i++)  // if com -> replace n by k;
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void generate_per() 
{
	int i = n-1;
	while(i > 0 && a[i] >= a[i+1])
	{
		i--;
	}
	if(i == 0) stop = true;
	else
	{
		int j = n;
		while(a[i] >= a[j])
		{
			j--;
		}
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}
void generate_com() 
{
	int i = k;
	while( i > 0 && a[i] == n-k+i)
	{
		i--;
	}
	if(i == 0) stop =  true;
	else
	{
		a[i]++;
		for(int j = i+1; j <= k; j++)
		{
			a[j] = a[j-1]+1;
		}
	}
}
//0000
//0001
//0010
//0011
//0100
void generate_bin() 
{
	int i = n;
	while(i > 0 && a[i] == 1)
	{
		a[i] = 0;
		i--;
	}
	if(i == 0)
	{
		stop = true;
	}
	else
	{
		a[i] = 1;
	}
}
int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
    	cin >> n;
//		cin >> k;
    	stop = false;
    	init();
    	while(!stop)
		{
    		display();
	    	generate_per();
		}
    }
    return 0;
}
