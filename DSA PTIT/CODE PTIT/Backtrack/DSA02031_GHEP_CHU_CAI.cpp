#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n;
string str;
bool vowel(char ch)
{
    return ch =='A' || ch == 'E'; // if A,E return true; the others false.
}
bool check(string &str)
{
    for(int i = 1; i< str.length()-1;i++)
    {
        if(!vowel(str[i-1])&&vowel(str[i])&&!vowel(str[i+1]))
            return false;
    }
    return true;
}

int main()
{
    char c; 
    cin>>c;
    string str="";
    for(char i = 'A';i<=c;i++)// must initial when using next_permutation function
    {
        str+=i;
    }
    do
    {
        if(check(str)) cout <<str <<endl;
   
    } while (next_permutation(str.begin(), str.end()));
    
   
}