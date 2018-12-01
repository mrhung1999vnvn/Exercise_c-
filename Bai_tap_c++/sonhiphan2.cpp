#include<bits/stdc++.h>
using namespace std;
int a[10000];
int b[10000];
bool vis[10000];
int n,t=1,s=1;
int giaithua(int n)
{
	for(int i=1;i<=n;i++)
	{
		t=t*i;
	}
}
void bt(int id)
{
	if(id==n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<a[i];
		}
		
		cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++)
	{
		a[id]=i;
		bt(id+1);
	}
}
int main()
{
	cin>>n;
	bt(0);
}
