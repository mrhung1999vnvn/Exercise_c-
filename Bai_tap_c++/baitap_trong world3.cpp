#include<iostream>
#include<string.h>
using namespace std;

int bt(char *a)
{
	int s=0;
	for(int i=0;i<strlen(a);i++)
	{
		switch(a[i])
		{
			case 'M':
				s=s+1000;
				break;
			case 'D':
				s=s+500;
				break;
			case 'C':
				s=s+100;
				break;
			case 'L':
				s=s+50;
				break;
			case 'X':
			 	s=s+10;
			 	break;
			case 'V':
				s=s+5;
				break;
			case 'I':
				s=s+1;
				break; 		
		}
	}
	return s;
}
int main()
{
	char a[100];
	gets(a);
	cout<<bt(a);
}
