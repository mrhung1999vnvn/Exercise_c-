#include<iostream>
#include<string>
using namespace std;

int bt9(string a,string b,int n)
{
    int k=0;
    cin>>n>>b;
    for(int i=0;i<=4*n;i++)
    {
    	getline(cin,a);
       if(a[0]=='A')
       {
       		k=k+11;
	   }
	   else if(a[0]=='K')
	   {
	   		k=k+4;
	   }
	   else if(a[0]=='Q')
	   {
	   		k=k+3;
	   }
	   else if(a[0]=='J')
	   {
	   		if(a[1]==b[0])
	   		{
	   			k=k+20;	
			}
			else
			{
				k=k+2;
			}
	   }
	   else if(a[0]=='T')
	   {
	   		k=k+10;
	   }
	   else if(a[0]=='9')
	   {
	   		if(a[1]==b[0])
	   		{
	   			k=k+14;	
			}
			else
			{
				k=k+0;
			}
	   }
	   else
	   {
	   		k=k+0;
	   }
	}
    return k;
}
int main()
{
    int n;
    string b,a;
    cout<<bt9(a,b,n);
}
