#include<iostream>
#include<cmath>
using namespace std;

int nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int bt5(int a[],int n)
{
	int s,k,t;
	for(int i=0;i<n;i++)
	{
		s=a[i]%10;
		k=a[i]/10;
		t=t+pow(k,s);
	}
	return t;
}
int main()
{
	int n;
	cout<<"nhap so luongg : ";
	cin>>n;
	int a[n];
	nhap(a,n);
	cout<<bt5(a,n);
}
