#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int bt(int a[],int r,int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int kt(int a[],int r,int n)
{
	int b=rand()% r + 1 ;
	int d=0;
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=1&&a[i]<=r)
		{
			for(int j=i-1;j>=0;j--)
			{
				if(a[i]==a[j])
				{
					d++;
				}
			}
		}
		else
		{
			c=1;
		}
	}
	int k=0;
	if(d==0&&n<r&&c==0)
	{
		for(int i=1;i<=r;i++)
		{
	  		for(int j=i;j>=0;j--)
	  		{	
		  		if(b==a[j])
				{
					b=rand()% r + 1;
					j=i;
				}		
			}
		}
		cout<<b;
	}
	else
	{
		cout<<"too late";
	}
}
int main()
{
	int r,n;
	cin>>r;
	cin>>n;
	int a[n];
	bt(a,r,n);
	kt(a,r,n);
}
