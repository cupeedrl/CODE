#include<bits/stdc++.h>

using namespace std;
//idea: if increasing elements have located in right pos,
// it has before pos < after pos
int main()
{
	int n;
	cin>> n;
	int a[n],pos[n+1];
	int cnt = 0;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		pos[a[i]] = i; //store pos
	}
    int len = 1, LIS = 1;
    for(int j = 2; j <= n; j++)
    {
        if(pos[j] > pos[j-1])// if element has before pos < after pos
            len++;
        else
            len = 1;
        LIS = max(LIS, len);
    }
	cout << n-LIS; // steps = n-element which has located in right pos
}

// pos[4] = 0
// pos[1] = 1
// pos[2] = 2
// pos[5] = 3
// pos[3] = 4

// pos[1] = 1
// pos[2] = 2
// pos[3] = 4
// pos[4] = 0
// pos[5] = 3
// -> 1 2 3 => step number = 5 - 3 
