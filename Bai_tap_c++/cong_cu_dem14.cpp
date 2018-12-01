#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	int h,w;
	cin>>n>>h>>w;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<=h||a[i]<=w)
		{
			cout<<"DA"<<endl;
		}
		else if(a[i]<=(sqrt(w*w+h*h)))
		{
			cout<<"DA"<<endl;
		}
		else
		{
			cout<<"NE"<<endl;
		}
	}
}
