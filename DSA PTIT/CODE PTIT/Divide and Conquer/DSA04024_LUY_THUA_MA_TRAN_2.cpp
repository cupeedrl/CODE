#include<bits/stdc++.h>
using namespace std;
int n,k;
const long long mod = 1e9+7;
struct Matrix 
{
	long long x[11][11];
	
	friend Matrix operator*(Matrix a, Matrix b)
	{
		Matrix c;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				c.x[i][j] = 0;
				for(int k = 0; k < n; k++)
				{
					c.x[i][j]+= a.x[i][k] * b.x[k][j];
					c.x[i][j]%= mod;
				}	
			}	
		}
		return c;	
	}
};

Matrix Matrix_pow(Matrix a, int k)
{
	if(k == 1)
		return a;
	Matrix tmp =  Matrix_pow(a,k/2);
	if(k % 2 == 1)
		return tmp * tmp * a;
	else	
		return tmp * tmp;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		Matrix a;
		
		cin >> n >> k;
		long long sum = 0;
		
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				cin >>  a.x[i][j];
			}	
		}

		Matrix ans = Matrix_pow(a,k);

		for(int i = 0; i < n; i++)
		{
			sum+= ans.x[i][n-1] ;
		}

		cout << sum % mod << endl;
	}
}

