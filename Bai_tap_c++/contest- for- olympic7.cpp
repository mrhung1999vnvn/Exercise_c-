#include<iostream>
using namespace std;

void bt7(int a[],int b[],int &n)
{
	int s,g;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i==2||i==3)
		{
			b[i]=1;
			s=b[i];
		}
		else if (i==1)
		{
			b[i]=0;
			s=b[i];
		}
		else
		{
			b[i]=b[i-1]+b[i-2];
			s=b[i];
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(i==1||i==2)
		{
			a[i]=1;
			g=a[i];
		}
		else
		{
			a[i]=a[i-1]+a[i-2];
			g=a[i];
		}
	}
	cout<<s<<"\t"<<g;
}
int main()
{
	int a[100],b[100];
	int n;
	bt7(a,b,n);
}
