#include<iostream>
using namespace std;

int bt3(int x,int y)
{
	cout<<"nhap toa do x :";
	cin>>x;
	cout<<"nhap toa do y :";
	cin>>y;
	if(x>0&&y>0)
	{
		return 1;
	}
	else if(x<0&&y>0)
	{
		return 2;
	}
	else if(x<0&&y<0)
	{
		return 3;
	}
	else
	{
		return 4;
	}
}

int main()
{
	int x,y;
	cout<<bt3(x,y);
}
