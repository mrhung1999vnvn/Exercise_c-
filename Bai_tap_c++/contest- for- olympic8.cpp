#include<iostream>
#include<string>
using namespace std;

struct ds
{
	string ngay,thang,nam,haicham;
	int h1,h2,p1,p2;
	
};
void nhap(ds a[],int n)
{
	cout<<"nhap so ngay : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		getline(cin,a[i].thang);
		getline(cin,a[i].ngay);
		getline(cin,a[i].nam);
		cin>>a[i].h1;
		getline(cin,a[i].haicham);
		cin>>a[i].p1;
		cin>>a[i].h2
		
		cin>>a[i].p2;
	}
}
void bt9(ds a[],int n)
{
	int p=0;
	int h=0;
	for(int i=0;i<n;i++)
	{
		if(a[i].h2-a[i].h1>=2)
		{
			if(a[i].p2-a[i].p1<0)
			{
				p=60+(a[i].p2-a[i].p1);
				h=a[i].h2-a[i].h1-1;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i].thang<<endl;
		cout<<a[i].ngay<<endl;
		cout<<a[i].nam<<endl;
		cout<<p<<endl;
		cout<<h<<endl;
	}
}
int main()
{
	int n;
    ds a[1000];
    nhap(a,n);
    bt9(a,n);
}
