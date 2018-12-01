#include<iostream>
using namespace std;
 
int nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"nhap mang a["<<i<<"]";
		cin>>a[i];
	}
}
int duongdau(int a[],int n)
{
	int dd=0;
	for(int i=0;i<n;i++)
	
		if(a[i]<0)
		{
			dd=-1;
		
		return a[dd];
		}
		else if (a[i]>0)
		return a[dd];	
	
	
}
int xuat(int a[],int n)
{
	int kq;
	kq=duongdau(a,n);
	cout<<"so duong dau la"<<kq;
}
int main()
{
	int n,a[1000];
	cin>>n;
	nhap(a,n);
	xuat(a,n);
	return 0;
}
