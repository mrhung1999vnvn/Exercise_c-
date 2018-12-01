#include <iostream>
using namespace std;

void nhap(int a[],int n)
{
	for(i=0;i<n;i++)
	{
		cout<<"nhap mang a["<<i<<"]"<<endl;
		cin>>a[i];
	}
}
int sochan(int a[],int n)
{
	sc=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		sc=i;
	}
}
void xuat(int a[],int n)
{
	int kq=sochan(a,n);
	cout<<"kq la "<<kq;
}
int main ()
{
	int n,a[1000];
	cin>>n;
	nhap(a,n);
	xuat(a,n);
	return 0;
}
