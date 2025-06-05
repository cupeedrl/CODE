#include <bits/stdc++.h>
using namespace std;
int n;
const long long MOD = 1e9+7;

struct Matrix
{
    long long x[2][2];
    friend Matrix operator * (Matrix a, Matrix b)
    {
        Matrix c;
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                c.x[i][j] = 0;
                for(int k = 0; k < 2; k++)
                c.x[i][j] += a.x[i][k] * b.x[k][j];
                c.x[i][j]%= MOD;
            }
        }
        return c;     
    }
    
};

Matrix Matrix_pow(Matrix a, long long n)
{
    if(n == 1)
        return a;
    Matrix tmp = Matrix_pow(a,n/2);
    if(n % 2 == 1)
        return tmp*tmp*a;
    else
        return tmp*tmp; 
}
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while( t--)
	{
        Matrix a;
        a.x[0][0] = 1; a.x[0][1] = 1;
        a.x[1][0] = 1; a.x[1][1] = 0;
        cin >> n;
        cout << Matrix_pow(a,n).x[0][1]<< endl; // cong
    }    
}
