#include<bits/stdc++.h>
using namespace std;
string x[4];
string dys[3] ={"02","20","22"};
string yrs[8] ={"2000","2002","2020","2022","2200","2202","2220","2222"};
void Try(int i)
{
	if(i == 1)
	{
		for(int j = 0; j<3;j++)
		{
			x[i] = dys[j] ;
			Try(i+1);		
		}
	}
	else if(i == 2)
	{
		x[i] = "02";
		Try(i+1);
	}
	else
	{
		for(int j = 0; j<8;j++)
		{
			x[i] = yrs[j];
			cout<<x[1]<<"/"<<x[2]<<"/"<<x[3]<<endl;
		}	
	}
}
int main()
{
    Try(1);
}
