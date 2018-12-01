#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	int d=0;
	int k=a%10;
	while(d==0&&d<=b)
	{
		if(k<5&&b==1)
		{
			a=a-k;
		}
		else if(k>=5&&b==1)
		{
			a=a+k;
		}
		else if(k<5&&b>1)
		{
			a=a+b*10-k;
		}
		else if(k>=5&&b>1)
		{
			a=a+b*10+k;
		}
		for(int i=a;i>0;i=i/10)
		{
			if(i%10==0)
			{
				d++;
			}
		}
	}
	cout<<a;
}
