#include<bits/stdc++.h>
using namespace std;

int s=0;
bool vis[100];
int a[501][501];
int n;
int m,d=0;
int k=0;

int DFS(int id)
{
		s=s+d;
		for(int i=1;i<=m;i++){
			if(a[id][i]>a[id-1][i] || a[id][i]>a[id][i+1] || a[id][i]>a[id+1][i] || a[id][i]>a[id][i-1]){
				vis[i]=true;
			}
			else 
			{
				d++;
			}
		}
		for(int i=1;i<=m;i++)
		{
			if(vis[i])
			{
				DFS(id+1);
			}
		}
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
//	for(int i=0;i<=n+1;i++){
//		for(int j=0;j<=m+1;j++){
//			cout<<a[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	DFS(1);
	for(int i=0;i<=n+1;i++){
		for(int j=0;j<=m+1;j++){
			if(i==0||i==n+1)
				a[i][j]=64000;
			else if(j==0||j==m+1)
				a[i][j]=64000;
		}
	}
	cout<<s;
}
