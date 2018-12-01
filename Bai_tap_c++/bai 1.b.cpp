#include <iostream>
using namespace std;

float tong(int n)
{	
	if (n==0) return 1;
	return (float)1/(2*n+1) + tong(n-1);
}
void inkq(float kq)
{
	cout<<"tong la"<<kq;
}
int main()
{
	int n;
	float kq;
	cin>>n;
	kq=tong(n);
	inkq(kq);
	return 0;
}
