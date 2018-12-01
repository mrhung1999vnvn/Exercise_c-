#include<iostream>
using namespace std;

int main()
{
	string n;
	int A,B,C;
	int max=0;
	int min=0;
	int medium;
	cin>>A>>B>>C;
	fflush(stdin);
	getline(cin,n);
	if(A>B&&A>C)
	{
		max=A;
	}
	else if(B>A&&B>C)
	{
		max=B;
	}
	else if(C>A&&C>B)
	{
		max=C;
	}
    if(A<B&&A<C)
	{
		min=A;
	}
	else if(B<A&&B<C)
	{
		min=B;
	}
	else if(C<A&&C<B)
	{
		min=C;
	}
	if((A>B&&A<C)||(A<B&&A>C))
	{
		medium=A;
	}
	else if((B>A&&B<C)||(B<A&&B>C))
	{
		medium=B;
	}
	else if((C>A&&C<B)||(C<A&&C>B))
	{
		medium=C;
	}
	for(int i=0;n[i]!='\0';i++)
	{
		if(n[i]=='C')
		{
			cout<<max<<"\t";
		}
		else if(n[i]=='A')
		{
			cout<<min<<"\t";
		}
		else
		{
			cout<<medium<<"\t";
		}
	}
}
