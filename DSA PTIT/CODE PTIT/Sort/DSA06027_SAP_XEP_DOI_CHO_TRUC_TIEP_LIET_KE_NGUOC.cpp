#include<bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> res;
// co the dung mang 2 chieu res[105][105]
void InterchangeSort(vector<int> &a, int n)
{
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] > a[j])
			{
				swap(a[i],a[j]);
			}	
		}
        res.push_back(a);   
	} 
}

void display()
{
    for(int i = res.size()-1; i >= 0; i--)
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
    int t; cin >> t;
    while(t--)
    {
        cin>> n;

        res.clear();
        vector<int> a(n);

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        InterchangeSort(a,n);
        display();
    }
}
/*
#include <bits/stdc++.h>
using namespace std;

int n, a[105];
int res[105][105]; // store each step result

void InterchangeSort(int a[], int n)
{
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] > a[j])
			{
				swap(a[i],a[j]);
			}	
		}
        for(int k = 0; k < n; k++) {
            res[i][k] = a[k]; 
        }
    }
}
void display()
{
    for(int i = n - 1 - 1 ; i >= 0; i--) {
        cout << "Buoc " << i+1  << ": ";
        for(int j = 0; j < n; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        memset(res,0,sizeof(res));
        
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        InterchangeSort(a, n);
        display();
    } 
    return 0;
}
*/