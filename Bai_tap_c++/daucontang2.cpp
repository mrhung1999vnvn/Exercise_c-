#include<bits/stdc++.h>
using namespace std;

int a[10000];
int dodai[10000];
int b[10000];
int n,d=0;
#define For(i,a,b) for(int i=a;i<b;i++)
void bt1()
{
	For(i,0,n){
		cin>>a[i];
	}
	For(i,0,n) 
	{
		dodai[i]=1;
		b[i]=-1;
		for(int j=i;j>=0;j--)
		{
			if(a[j]<a[i]&&b[j]>=b[i])
			{
				dodai[i]=max(dodai[j]+1,dodai[i]);
				b[i]=b[j]+1;
			}
			if(b[i]==0)
			{
				b[i]=1;
			}
		}
	//	cout<<b[i]<<" ";
	}
	cout<<endl;
	int max=0,vitri=1;
	For(i,0,n)
	{
		if(max<dodai[i])
			max=dodai[i];
		if(b[vitri]<b[i]) // lay vi tri cua truy vet lon nhat
			vitri=i; 
	}
	cout<<max<<endl;
//	For(i,0,n){
//		if(b[vitri]<b[i])
//			vitri=i;
//	}
	For(i,0,n)
	{
		// gan vi tri truy vet lon nhat
		if(a[i]<=a[vitri]&&a[i]<a[i+1])
		{
			cout<<a[i]<<" ";
		}
	}
	cout<<a[vitri]; //xuat vi tri cuoi cung
	
}
int main()
{
	cin>>n;
	bt1();
}
