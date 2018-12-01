#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	getline(cin,a);
	int n=a.length();
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]==a[i+1])
		{	
			for(int j=i;a[j]!='\0';j++)
			{
				a[j]=a[j+1];
			}
			n--;
			i--;
		}	
	}
	for(int i=0;a[i]!='\0';i++)
	{
		cout<<a[i];
	}
}
