#include<iostream>
#include<string>

using namespace std;

int bt10(string a)
{
	getline(cin,a);
	int nguyen=0;
	int phu=0;
	int khac=0;
	int so=0;
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')
		{
			nguyen++;
		}
		else if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y')
		{
			nguyen++;
		}
		else if(a[i]>=48&&a[i]<=57)
		{
			so++;
		}
		else if((a[i]>=0&&a[i]<=47)||(a[i]>=123&&a[i]<=256)||(a[i]<=91&&a[i]>=96))
		{
			khac++;
		}
		else
		{
			phu++;
		}
		
		
	}
	cout<<"nguyen am: "<<nguyen<<endl;
	cout<<"phu am la :"<<phu<<endl;
	cout<<"so la : "<<so<<endl;
	cout<<"ky tu khac : "<<khac<<endl;
}

int main()
{
	string a;
	getline(cin,a);
	bt10(a);
}
