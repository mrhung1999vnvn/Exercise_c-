#include<iostream>
using namespace std;

struct ds
{
	int a,b;
};
void nhap(ds a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i].a>>a[i].b;
	}
}
void bt4(ds a[],int n)
{
	int d=0;
	for(int i=0;i<n;i++)
	{
		if((a[i].a>=a[i-1].a)&&(a[i].b<=a[i-1].b))
		{
			if(a[i].a==a[i].b)
			{
				d=1;
			}
		}
		
	}
	if(d==1)
	{
		cout<<"gunilla has a point";
	}
	else
	{
		cout<<"edward is right";
	}
}
int main()
{
	int n;
	cin>>n;
	ds a[n];
	nhap(a,n);
	bt4(a,n); 
}
