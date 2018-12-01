#include<bits/stdc++.h>
using namespace std;

int a[1002][1002];
int vis[1002][1002]={};
int n,m,s=0,d=0;
int tran;
int dy[4]={-1,0,1,0};
int dx[4]={0,1,0,-1};

void chuanuoc(int x,int y){									//
	vis[x][y]=true;
	d++;
	for(int i=0;i<4;i++){
		int lx=x+dx[i];
		int ly=y+dy[i];
		if(a[lx][ly]<a[x][y]){
			tran=false;
		}
		if((a[x][y]==a[lx][ly])&&!vis[lx][ly])
			chuanuoc(lx,ly);
		
	}
}
int main()
{
	cin>>m>>n;
	for(int i=0;i<=n+1;i++)
		for(int j=0;j<=m+1;j++)
				a[i][j]=1000;
	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];

	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(vis[i][j]==false){
				tran=true;
				d=0;
				chuanuoc(i,j);
				if(tran==true){
//					cout<<i<<' '<<j<<' '<<d<<endl;
//					cout<<d<<endl;
					s+=d;
				}
			}
		}
	}
	cout<<s;
}
