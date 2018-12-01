#include <iostream>
using namespace std;

int min(int n,int &nn)
{
	if(n%10==0) return nn;
		if(n%10<nn)
			nn=n%10;
		return min(n%10,n/10);
		
}
void inkq(int kq)
{
	cout<<"so nho nhat la:"<<kq;
}
int main()
{
	int n,kq;
	cin>>n;
	kq=min(n,n%10);
	inkq(kq);
	return 0;
}
