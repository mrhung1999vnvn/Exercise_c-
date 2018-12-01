#include <iostream>
using namespace std;

void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"nhap mang a["<<i<<"]";
		cin>>a[i];
	}
}
int sochan(int a[],int n)
{
	int sc;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		sc=i;
	}
	return sc;
}
void xuat(int a[],int n)
{
	int kq;
	kq=sochan(a,n);
	cout<<"ket quan la"<<kq;
}
int main ()
{
	int n,a[100];
	cin>>n;
	nhap(a,n);
	xuat(a,n);
	return 0;
}
