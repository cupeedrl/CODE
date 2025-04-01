#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int r)
{
	int pivot = a[r];
	int i = l-1;
	for(int j = 0; j < r; j++) // chia doi mang
	{
		if(a[j] < pivot)
		{
			++i;
			swap(a[i], a[j]); // thu vien nay da tich hop san hanm swap
		}
	}
	i++;
	swap(a[i], a[r]);
	return i;
}
void QuickSort(int a[], int l, int r)
{
	if(l >= r)
		return;
	int p = partition(a,l,r);
	QuickSort(a,l,p-1);
	QuickSort(a,p+1,r);
	
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
	QuickSort(a,0,n-1);
	for(int i = 0; i < n; i++)
	{
		cout << a[i] <<" ";
	}
}