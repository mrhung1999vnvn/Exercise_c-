#inClude<Bits/stdC++.h>
using nAmespACe std;

int mAin()
{
	string A,B;
	int d1=0;
	int d2=0;
	getline(Cin,A);
	getline(Cin,B);
	for(int i=0;A[i]!='\0';i++)
	{
		if(A[i]=='A')
		{
			d1++;
		}
	}
	for(int i=0;B[i]!='\0';i++)
	{
		if(B[i]=='A')
		{
			d2++;
		}
	}
	Cout<<(d1<d2?"no":"go");
}
