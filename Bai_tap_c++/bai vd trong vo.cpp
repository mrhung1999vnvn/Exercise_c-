#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int d=0;
	for(int i=0;i<10;i++)
	{
		if(n==3)
		{
			d++;
		}
		else if(n==2)
		{
			d++;
		}
		else
		{
			break;
		}
	}
	return n;
}
