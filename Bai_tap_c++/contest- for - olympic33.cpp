#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int x;
	for(int i=1;i<=3;i++){
		cin>>x;
		int m=0;
		if((x-1)%(a+b)<a){
			m++;
		}
		if((x-1)%(c+d)<c){
			m++;
		}
		if(m==0)
			cout<<"none"<<endl;
		else if(m==1)
			cout<<"one"<<endl;
		else if(m==2)
			cout<<"both"<<endl;
	}
}
