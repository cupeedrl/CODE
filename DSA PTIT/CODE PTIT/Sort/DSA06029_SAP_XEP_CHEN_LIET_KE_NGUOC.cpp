#include<bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> res;// co the dung mang 2 chieu res[105][105];
int store;
void InsertionSort(vector<int> &a, int n)
{
    store = a[0];
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
        vector<int> tmp(a.begin(),a.begin()+i+1); // store a[0] - a[i]
        res.push_back(tmp);  
    }    
}

void display()
{
    for(int i = res.size()- 1; i >= 0; i--)
    {
        cout<<"Buoc " << i+1 <<": ";
        for(int k = 0; k < res[i].size(); k++)
        {
            cout << res[i][k] <<" ";
        }     
		cout << endl;
    }
      cout<<"Buoc 0: " << store;
}
int main()
{
 
    cin>> n;

    res.clear();

    vector<int> a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    InsertionSort(a,n);
    display();
  
    
}
