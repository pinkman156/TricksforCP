#include<bits/stdc++.h>
using namespace std;
int m=10000000007;
int main()
{
	int a,b;
	cin>>a>>b;
	b=b%m;
	long long int product=0;
	while(a!=0)
	{
		if(a & 1)
		   product=(product +b)%m;

		b=(b*2)%m;
		a>>=1;
	}
	cout<<product%m;
}
