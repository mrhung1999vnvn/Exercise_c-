#include<bits/stdc++.h>
using namespace std;

#define Max 100001
int k, index,a,n;
int d=0;
vector <int>v[Max];
int vis[Max];

void ebola(int id)
{
	d++;
	vis[id]=1;				//danh dau da check roi
	int si = v[id].size();
	for(int i=0;i<si;i++)
	{
		if(!vis[v[id][i]]) //check tung line cua vector co bang 0
		{
			ebola(v[id][i]);
		}
	}
}
int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>index;						//input so luong cua hang nhap vao;
		for(int j=1;j<=index;j++)
		{
			cin>>a;
			v[i].push_back(a);
		}
	}
	ebola(k);
	cout<<d<<"\n";
	for(int i=1;i<=n;i++)//cout true/1;
	{
		if(vis[i])
		{
			cout<<i<<" ";
		}
	}
}

