#include<bits/stdc++.h>
using namespace std;
string s;
int n,check;
void initial()
{
    for(int i = 1; i<=n; i++)
        s[i] = 'A';
}
void generative()
{
    int i = n;
    while(s[i] == 'B')
    {
        s[i] = 'A';
        i--;
    }
    if(i < 1)
        check = 1; 
    else
        s[i] = 'B';
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        check = 0;
        initial();
        while(check == 0)
        {
            for(int i = 1; i<=n;i++)
            {
                cout<<s[i];
            }
            cout<<" ";
            generative();
        }
        cout<<endl;
    }
}








































// XÂU AB CÓ ĐỘ DÀI N
// Xâu ký tự str được gọi là xâu AB nếu mỗi ký tự trong xâu hoặc là ký tự ‘A’ hoặc là ký tự ‘B’. Ví dụ xâu str=”ABBABB” là xâu AB độ dài 6. 
// Nhiệm vụ của bạn là hãy liệt kê tất cả các xâu AB có độ dài n.
// Input:
// Dòng đầu tiên đưa vào số lượng test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên n.
// T, n thỏa mãn ràng buộc: 1≤T≤10; 1≤n≤10.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng. Mỗi xâu cách nhau 1 khoảng trống.

// Input

// 2
// 2
// 3
// Output
// AA AB BA BB
// AAA AAB ABA ABB BAA BAB BBA BBB