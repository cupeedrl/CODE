#include<bits/stdc++.h>
using namespace std;
void Merge(int a[], int l, int m, int r)
{
	vector<int> x(a+l, a + m + 1); // = for int i = l; i <= m; i++
	vector<int> y(a+m+ 1, a + r + 1);
	int i = 0, j = 0, k = l;
	while (i < x.size() && j < y.size())
	{
		if(x[i] <= y[j])
		{
			a[k++] = x[i++];
		}	
		else
			a[k++] = y[j++];
	}
	while (i < x.size())
	{
		a[k++] = x[i++]; // chen not nhung phan tu giong nhau 
	}
	while (j < y.size())
	{
		a[k++] = y[j++];
	}
}
void MergeSort(int a[], int l, int r)
{
	if(l >= r)
		return;
	int m = (l+r) / 2;
	MergeSort(a,l,m);
	MergeSort(a,m+1,r);
	Merge(a,l,m,r);
}
int main()
{
	int n;
	cin >> n;
	srand(time(NULL));
	int a[n];
	for(int i = 0; i < n; i++)
	{
		a[i]= rand() % 1000;
	}
	MergeSort(a,0,n-1);
	for(int i = 0; i < n; i++)
	{
		cout << a[i] <<" ";
	}
}