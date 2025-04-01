#include<bits/stdc++.h>
using namespace std;
void place(int n, char a, char b)
{
    cout<<a<<"->" <<b<<endl;
}
void HaNoiTower(int n, char a, char b, char c)
{
    if(n == 1)
        place(1,a,c);
    else
    {
        HaNoiTower(n-1,a,c,b);// move n-1 disk from A to B, which C is mid
        place(n,a,c);// move the last disk.
        HaNoiTower(n-1,b,a,c);// move n-1 disk from B to C, which A is mid
    }
}
int main()
{
    int n;
    char a ='A',b='B',c='C';
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    HaNoiTower(n,a,b,c);
   
}
