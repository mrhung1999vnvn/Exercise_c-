#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char a[100];
	int k;
	gets(a);
	k=a.length();
	int d=0;
	for(int i=1;i<a.length();i++)
	{
		if(a[0]>=97&&a[0]<=122)
		{
			a[0]=a[0]-32;
		}
		else if((a[i]==32&&a[i+1]==32))
		{
			for(int j=i;j<a.length();j++)
			{
				a[j]=a[j+1];
			}
			k--;
			i--;
		}
		else if(a[i]!=32&&a[i-1]==32)
		{
			if(a[i]>=97&&a[i]<=122)
			{
				a[i]=a[i]-32;
			}
		}
		else if(a[i]!=32&&a[i-1]!=32)
		{
			if(a[i]>=65&&a[i]<=90)
			{
				a[i]=a[i]+32;
			}
		}
	}
	for(int i=0;i<a.length();i++)
	{
		cout<<a[i];
	}
}
