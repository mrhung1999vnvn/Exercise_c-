#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int h,m,s;
	cin>>h>>m;
	if(h==0)
	{
		h=24;
	}
	if(h<=24&&h>=0&&m>=0&&m<=60)
	{
		if(m-45<0)
		{
			s=60-abs(m-45);
			cout<<h-1<<"\t"<<s;
		}
		else
		{
			cout<<h<<"\t"<<m-45;
		}
	}
	return 0;
}
