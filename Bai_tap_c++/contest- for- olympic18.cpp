#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int k;
	switch (b)
	{
		case 1:
			k=pow(10,1);
			if(a%k<5)
			{
				a=a-a%k;
			}
			else if(a%k>=5)
			{
				a=a+(k-a%k);
			}
			break;
		case 2:
			k=pow(10,2);
			if(a%k<50)
			{
				a=a-a%k;
			}
			else if(a%k>=50)
			{
				a=a+(k-a%k);
			}
			break;
		case 3:
			k=pow(10,3);
			if(a%k<500)
			{
				a=a-a%k;
			}
			else if(a%k>=5)
			{
				a=a+(k-a%k);
			}
			break;
		case 4:
			k=pow(10,4);
			if(a%k<5000)
			{
				a=a-a%k;
			}
			else if(a%k>=5)
			{
				a=a+(k-a%k);
			}
			break;
		case 5:
			k=pow(10,5);
			if(a%k<50000)
			{
				a=a-a%k;
			}
			else if(a%k>=5)
			{
				a=a+(k-a%k);
			}
			break;
		case 6:
			k=pow(10,6);
			if(a%k<500000)
			{
				a=a-a%k;
			}
			else if(a%k>=5)
			{
				a=a+(k-a%k);
			}
			break;
		case 7:
			k=pow(10,7);
			if(a%k<5000000)
			{
				a=a-a%k;
			}
			else if(a%k>=5)
			{
				a=a+(k-a%k);
			}
			break;
		case 8:
			k=pow(10,8);
			if(a%k<50000000)
			{
				a=a-a%k;
			}
			else if(a%k>=5)
			{
				a=a+(k-a%k);
			}
			break;
		case 9:
			k=pow(10,9);
			if(a%k<500000000)
			{
				a=a-a%k;
			}
			else if(a%k>=5)
			{
				a=a+(k-a%k);
			}
			break;
	}
	cout<<a;
}
