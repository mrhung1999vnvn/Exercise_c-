#include<iostream>
#include<string>
using namespace std;
struct ds
{
	string ten;
};

void nhap(ds a[],int n,int p)
{
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		getline(cin,a[i].ten);
	}
}
void bt2(ds a[],int n,int p)
{
	int max;
	int d=0;
	for(int i=0;i<n;i++)
	{
		int c=0;
		for(int j=i;j>=0;j--)
		{
			if(j!=i)
			{
				if(a[i].ten==a[j].ten)
				{
					c=1;
				}
			}
		}
		if(c==1)
		{
			d++;
		}
		else
		{
			max=i+1;
		}
	}
	if((n-d)==p)
	{
	   cout<<max;
	}
	else
	{
		cout<<"paradox avoided";
	}
}
int main()
{
	int n,p;
	cin>>p>>n;
	ds a[20];
	nhap(a,n,p);
	bt2(a,n,p);
}
