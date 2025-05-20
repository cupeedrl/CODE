#include<bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> res;// co the dung mang 2 chieu res[105][105];

void BubbleSort(vector<int> &a, int n)
{
    for(int i = 0; i < n; i++)
	{
        int mark = 0;
        for(int j = 0; j < n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j],a[j+1]);
                mark = 1;
            }  
        }
        if(mark == 0)
            break;
        res.push_back(a);  
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
        BubbleSort(a,n);
        display();
    }
}