#include<iostream>
#include<string>

using namespace std;

int main()
{
	string a;
	getline(cin,a);
	int c=0;
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]=='s'&&a[i+1]=='s')
		{
			c++;
		}
	}
	if(c!=0)
	{
		cout<<"hiss";
	}
	else
	{
		cout<<"no hiss";
	}
}
