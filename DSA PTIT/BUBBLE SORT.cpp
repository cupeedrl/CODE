#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void BubbleSort(int a[], int n)
{
	for(int i = 0; i < n-1; i++)
	{
		int mark = 0;
		for(int j = 0; j <n-i-1;j++)
		{
			if(a[j] > a [j+1])
			{
				swap(a[j], a[j+1]);
				mark = 1;		
			}		
		}
		cout <<"Buoc " << i+1 <<": ";
		for(int k = 0; k < n; k++)
		{
			cout << a[k] << " ";
		}	
		cout << endl;
		if (mark == 0)
			break;
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
	BubbleSort(a, n);

}