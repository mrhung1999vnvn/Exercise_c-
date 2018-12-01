#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n*2];
	int b[n];
	while(n)
	{
		for(int i=0;i<2*n;i++)
		{
			cin>>a[i];
		}
		for(int i=n;i<2*n;i++)
		{
			b[i]=a[i];
		}
		
	}
}
