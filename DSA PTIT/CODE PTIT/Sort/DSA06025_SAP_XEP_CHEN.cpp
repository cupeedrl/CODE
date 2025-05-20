#include<bits/stdc++.h>
using namespace std;

void InsectionSort(int a[], int n)
{
	for(int i = 1; i < n; i++)
	{
		int j = i-1;
		int key = a[i];
		while(j >= 0 &&  a[j] > key)
		{
			a[j+1] = a[j];
			j--; 
		}
		a[j+1] = key; 
		cout<<"Buoc " << i <<": ";
		for(int k = 0; k <= i; k++)
			cout<<	a[k] <<" ";
		cout << endl;
	} 
}
int main()
{
	int n;
	cin>> n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	} 
	cout <<"Buoc 0: " << a[0] << endl;
	InsectionSort(a, n);
}