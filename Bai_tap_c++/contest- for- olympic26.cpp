#include<bits/stdc++.h>
using namespace std;

int nhap(char a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
}
void xuat(char a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
}
int main()
{
	int n,m;
	char a[100][100];
	cin>>n;
	cin>>m;
	nhap(a,n,m);
	xuat(a,n,m);
}
