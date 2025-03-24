#include<bits/stdc++.h>
using namespace std;
int n,k,used[1001], x[1001];
// The array x is automatically filled with zeros when declared globally
void display()
{
	for(int i = 1; i<= n; i++)
	{
		cout << x[i];
	}
	cout <<endl;
}
void Try(int i)
{
	for(int j = 1; j<= n; j++)
	{
		if(used[j] == 0)
		{	
			x[i] = j;
			used[j] = 1;
			if(i == n)
			{
				display();
			}
			else
			{
				Try(i+1);
			}	
			used[j] = 0;	
		}
	}
}
int main()
{

	cin >> n ;
	Try(1);
}
