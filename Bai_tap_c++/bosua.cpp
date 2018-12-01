#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	int s=0;
	int d=0;
	int k=0;
	for(int i=0;i<n;i++)
	{
		k=a[i]-d;
		d++;
		if(k>0)
		{
			s=s+k;
		}
	}
	cout<<s;
}
