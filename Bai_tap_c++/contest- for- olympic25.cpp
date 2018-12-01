#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int s=0;
	int k=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,n+a);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
		if(i%2==0)
		{
			s=s+a[i];
		}
		else
		{
			k=k+a[i];
		}
	}
	cout<<endl;
	cout<<s<<"\t"<<k;
}
