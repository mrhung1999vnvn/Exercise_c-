#include<bits/stdc++.h>
using namespace std;
int vitri[100];
int vitri2[100];
void fi(int a,int b,int n)
{
	for(int i=3;i<=n;i++)
	{
		if(i==1||i==2)
		{
			vitri[i]=1;
		}
		else
		{
			vitri[i]=vitri[i-1]+vitri[i-2];
			b=vitri[i];
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(i==2||i==3)
		{
			vitri2[i]=1;
		}
		else
		{
			vitri2[i]=vitri2[i-1]+vitri2[i-2];
			a=vitri2[i];
		}
	}
	cout<<a<<"\t"<<b;
}
int main()
{
	int n;
	int a,b;
	cin>>n;
	fi(a,b,n);
}
