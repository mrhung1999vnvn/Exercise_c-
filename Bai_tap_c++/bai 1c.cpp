#include <iostream>
#include <cmath>
using namespace std;

int tong(int x,int n)
{
	if(n==0) return x;
	return pow(x,2*n+1)+tong(x,n-1);
}
void inkq(int kq)
{
	cout<<"tong la:"<<kq;
}
int main()
{
	int n,x,kq;
	cin>>x>>n;
	kq=tong(x,n);
	inkq(kq);
	return 0;
}
