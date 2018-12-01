#include<iostream>
using namespace std;

int main()
{
	int n;
	int a,b,c;
	int k,l,m=0;
	cin>>a>>b>>c;
	n=a+b;
	while(n/c>0)
	{
		m=m+(n/c);
		n=(n/c)+(n%c);	
	}
	cout<<m;
}
