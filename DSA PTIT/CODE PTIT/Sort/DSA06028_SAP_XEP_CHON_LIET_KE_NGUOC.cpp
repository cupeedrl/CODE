#include<bits/stdc++.h>
using namespace std;
int n,a[105];
int res[105][105];

void SelectionSort(int a[], int n)
{
	for(int i = 0; i < n-1; i++){
        int mark = i;
		for(int j = i+1; j < n; j++){
            if(a[j] < a[mark])
                mark = j;
		}
        swap(a[i],a[mark]);

		for(int k = 0; k < n; k++)
			res[i][k] = a[k];
	} 
}
void display()
{
    for(int i = n- 1 - 1; i >= 0; i--)
    {
        cout<<"Buoc " << i+1 <<": ";
        for(int k = 0; k < n; k++)
        {
            cout << res[i][k] <<" ";
        }
        cout << endl;     
    }
}
int main()
{
	cin>> n;

    memset(res,0,sizeof(res)); 

	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	SelectionSort(a, n);
    display();
}