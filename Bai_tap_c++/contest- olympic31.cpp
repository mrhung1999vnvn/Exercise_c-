#include<bits/stdc++.h>
using namespace std;

//int A[2]={1;-1};
//int B[2]={2;-1};
int main()
{
	string a;
	int x=1,d=0;
	int b[50];
	getline(cin,a);
	for(int i=0;i<a.length();i++)
	{
		if(a[i]=='A')
		{
			if(x==1)
			{
				x=x+1;
			}
			else if(x==2)
			{
				x=x-1;
			}
		}
		else if(a[i]=='B')
		{
			if(x==2)
				x=x+1;
			else if(x==3)
				x=x-1;
		}
		else if(a[i]=='C')
		{
			if(x==1)
				x+=2;
			else if(x==3)
				x-=2;
		}
	}
	cout<<x;
}
