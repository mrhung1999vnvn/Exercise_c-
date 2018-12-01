#include<iostream>
#include<string>
using namespace std;


int bt()
{	
    string a;
	int t=0;
	int c=0;
	int g=0;
	int d=0;
	int s;
	getline(cin,a);
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]=='T')
		{
			t++;
		}
		else if (a[i]=='C')
		{
			c++;
		}
		else if (a[i]=='G')
		{
			g++;
		}
	}
	if(t==c&&t==g)
	{
		d=t;
	}
	else if (((t<=c)&&(t<g))||((t<=g)&&(t<c)))
	{
		d=t;
	}
	else if(((c<=t)&&(c<g))||((c<=g)&&(c<t)))
	{
		d=c;
	}
	else if (((g<=t)&&(g<c))||((g<=c)&&(g<t)))
	{
		d=g;
	}
	s=t*t+c*c+g*g+d*7;
	return s;
}
int main()
{
	cout<<bt();
}
