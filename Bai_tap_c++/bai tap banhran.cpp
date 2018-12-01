#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	int m=0;
	int p=0;
	cin>>n>>k;
	while(n-k<=k)
	{
		if(m<3)
		{
			m++;
			p=p+5;
		}
		else
		{
			m=0;
			n=n-k;
		}
	}
	cout<<p;
}
