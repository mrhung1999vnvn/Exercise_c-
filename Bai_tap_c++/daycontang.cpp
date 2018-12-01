#include<bits/stdc++.h>
using namespace std;
int n,d=1,x=0;
int a[1001];
vector <int> b(10);
int j=0;

void bt1()
{
	For(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	For(int i=0;i<n;i++)
	{	
		if(a[i]+1==a[i+1])
		{	n
			d++;
			b[j]=a[i];
			j++;
			x=a[i];
		}
		else{
			b[j]=a[i];
			return;
		}
	}
}
void xuat()
{
	cout<<d<<endl;
	For(int i=0;i<d;i++)
		cout<<b[i]<<" ";
}
int main()
{
	cin>>n;
	bt1();
	xuat();
}
