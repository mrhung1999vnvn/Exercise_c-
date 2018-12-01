#include <iostream>
using namespace std;

int tong(int n)
{
	if(n==0) return 0;
	return n+tong(n-1);
}
void inkq(int kq)
{
	cout<<"tong la"<<kq;
}
int main()
{
	int n,kq;
	cin>>n;
	kq=tong(n);
	inkq(kq);
	return 0;
	
}
