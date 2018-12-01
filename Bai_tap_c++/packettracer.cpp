#include<bits/stdc++.h>
using namespace std;

int n,m,tran,d=0,s=0;
int a[1002][10002];
int vis[1002][10002];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};

int pt(int x,int y){
	vis[x][y]=true;
	d++;
	for(int i=0;i<4;i++){
		int lx=x+dx[i];
		int ly=y+dy[i];
		if(a[x][y]>a[lx][ly])
			tran=false;
		if(a[x][y]==a[lx][ly]&&!vis[lx][ly]){
			pt(lx,ly);
		}
	}
}
int main(){
	cin>>m>>n;
	for(int i=0;i<=n+1;i++)
		for(int j=0;j<=m+1;j++)
			a[i][j]=1000;
	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(!vis[i][j]){
				d=0;
				tran=true;
				pt(i,j);
				if(tran){
					s=s+d;
				}
			}
		}
	}
	cout<<s;
}
