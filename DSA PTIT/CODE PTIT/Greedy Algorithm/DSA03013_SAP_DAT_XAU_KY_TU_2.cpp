#include<bits/stdc++.h>

using namespace std;
int D, x[256];
string s;
void greedy()
{
    int max_char = 0;
    for(int i = 0; i<s.length();i++) 
        x[s[i]]++;
    for(int i = 0; i<256;i++)    
        if(max_char<x[i])
            max_char = x[i];
    if((max_char- 1)*(D-1) + max_char > s.length()) cout<<"-1\n";
    // Tính tổng số ô cần.
    //Kiểm tra xem tổng số khoảng trống cần đề điền các số không thuộc max char, sau đó điền max char vào chỗ còn lại
    //nếu lớn hơn length gốc => thừa=> sai
    else
        cout<<"1\n";
}
//VD D = 3, string aaaabbb;
// a _ _ a _ _ a 
// a b b a b a
// max char = 4
// check : (4-1)*2 > 7; => -1

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        cin >> D;
        cin.ignore();
        cin >> s;
        greedy();
        for (int i = 0; i < 256; i++) 
            x[i] = 0; // reset after 1 testcase;
    }
    return 0;
}
