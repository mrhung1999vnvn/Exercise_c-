#include<bits/stdc++.h>
using namespace std;

int a[100][100];
int b[100][100];
int n,k;
int s=0;
int main()
{
	int maxie=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			b[i][j]=b[i-1][j]+b[i][j-1]+a[i][j]-b[i-1][j-1];
		}
	}
	for(int i=k;i<=n;i++)
	{
		for(int j=k;j<=n;j++)
		{
			s=b[i][j]-b[i-k][j] -b[i][j-k] +b[i-k][j-k];
			maxie=max(maxie,s);
		}
	}
	cout<<maxie;
	return 0;
}
