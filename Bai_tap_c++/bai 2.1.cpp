#include <iostream>
using namespace std;

int  nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"nhap mang a["<<i<<"]";
		cin>>a[i];		
	}
}
int main ()
{
	int n,a[100];
	cin>>n;
	nhap(a,n);
	return 0;
}
