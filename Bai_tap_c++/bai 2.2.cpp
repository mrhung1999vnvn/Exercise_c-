#include <iostream>
using namespace std;

void xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
int main()
{
	int n,a[1000];
	cin>>n;
	xuat(a,n);
	return 0;
}
