#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector <int>a;
	int input;
	int i=0;
	do
	{
		cin>>input;
		a.push_back(input);
	}
	while(input!=0);
	{
		for(int i=0;i<a.size()-1;i++)
		{
			cout<<a[i];
		}
	}
	
}
