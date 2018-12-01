#include<iostream>
#include<string>

using namespace std;

void nhap(char a[],char b[],int n)
{
	int j;
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		gets(a);
		for( j=0;a[j]!='\0';j++)
		{
			if(a[j]=='T')
			{
				b[j]='1';
			}
			else
			{
				b[j]='0';
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;b[j]!='\0';j++)
		{
			cout<<b[j];
		}
	}
}
int main()
{
	char a[100],b[100];
	int n;
	cin>>n;
	nhap(a,b,n);
}
