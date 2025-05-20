#include<bits/stdc++.h>
using namespace std;

void display()
{
    int n,x;
    cin >> n;
    vector<int> odd, even;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(i % 2 == 1) even.push_back(x);
        else odd.push_back(x);
    }
    sort(odd.begin(), odd.end()); // giảm dần
    sort(even.begin(), even.end(), greater<int>());               // tăng dần
//     arr = [1, 2, 3, 4, 5]
// => a = [1, 2, 3]     
// => b = [5, 4]      
    for(int i = 0; i < even.size(); i++) cout << odd[i] << " " << even[i] << " ";
    if(n % 2 == 1)
        cout << odd.back();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; t = 1;
    while(t--)
    {
        display();
    }
}
