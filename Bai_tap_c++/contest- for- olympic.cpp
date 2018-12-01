#include<iostream>
using namespace std;

int nhap(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
	   cin>>a[i];
	}
}
float bt1(int a[],int n)
{
	int s=0;
	int d=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=-1&&a[i]<=4)
		{
			if(a[i]!=(-1))
			{
				s=s+a[i];
			}
			else
			{
				d++;
			}
		}
	}
    return (double)s/(n-d);

}
int main()
{
	int n;
	cin>>n;
	int a[n];
	nhap(a,n);
	cout<<bt1(a,n);
}
