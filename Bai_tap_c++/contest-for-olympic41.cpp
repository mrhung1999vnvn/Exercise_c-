#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,s=0;
	int a;
	string b;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		s=s+a;
		if(s<210)
			if(b=="T")
				n++;
	}
	if(n>8){
		n=n%8;
		cout<<n;}
	else if(n<=8)
		cout<<n;
	
}
