#include<bits/stdc++.h>
using namespace std;

int a[100][100];
int s=0;
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			a[i][j]+=max(a[i-1][j],a[i][j-1]); //lay vi tri lon nhat truoc do
		}
	}
	cout<<a[n][m];
}
