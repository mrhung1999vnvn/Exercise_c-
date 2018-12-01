#include<bits/stdc++.h>
using namespace std;

int n,s;
int a[100][100];
bool vis[1000];
queue <int>p;
int dis[100];
int trace[1000];
/*int DFS(int id)
{
	vis[id]=true;
	if(id==5)
	{
		
	}
	for(int i=0;i<n;i++)
	{
		if(a[id][i]!=64000&&a[id][i]==false)
		{
			trace[i]=id;
			DFS(i);
			a[i]
		}
	}
}*/
int BFS(int id)
{
	if(id==5){
		cout<<s;
	}
		vis[id]=true;
		dis[id]=0;
		p.push(id);
	while(!p.empty())
	{
		 s=p.front();p.pop();
		for(int i=0;i<n;i++){
			if(a[id][i]!=64000) { 
				BFS(i);		
			}
		}
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	BFS(0);
}
