#include <iostream>
using namespace std;

int usc(int n,int t)
{
	if(n==0) return 0;
		if(n%t==0)
			if(t%2==0)
			return 1+usc(n,t-1);
		return usc(n,t-1);
}
void inkq(int kq)
{
	cout<<"tong la :"<<kq;
}
int main ()
{
	int n,kq,t;
	cin>>n;
	kq=usc(n,n);
	inkq(kq);
	return 0;
}
