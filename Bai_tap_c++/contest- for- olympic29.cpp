#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int >a;
	int index; 
	int s=0;
	int max=0;
	int l=0;
	for(int i=0;i<2;i++)
	{
		while(index!=0);
		{
				cin>>a;
				s=s+a[i];
				l=a[i];
				if(max<a[i]){
					max=a[i];
				}	
			}
			if(s==0)
			{
				cout<<l<<endl;
				l=0;
			}
			else if(s!=0)
			{
				cout<<max<<endl;
				s=0;
			}
		}
	}
}
