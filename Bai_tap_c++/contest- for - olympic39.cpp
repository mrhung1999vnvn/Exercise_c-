#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[3];
	cin>>a[0]>>a[1]>>a[2];
	if(a[0]+a[1]==a[2]){
		cout<<a[0]<<"+"<<a[1]<<"="<<a[2];
	}
	else if(a[0]-a[1]==a[2])
		cout<<a[0]<<"-"<<a[1]<<"="<<a[2];
	else if(a[0]*a[1]==a[2])
		cout<<a[0]<<"*"<<a[1]<<"="<<a[2];
	else if(a[0]/a[1]==a[2])
		cout<<a[0]<<"/"<<a[1]<<"="<<a[2];
	else if(a[1]+a[2]==a[0])
		cout<<a[0]<<"="<<a[1]<<"+"<<a[2];
	else if(a[1]-a[2]==a[0])
		cout<<a[0]<<"="<<a[1]<<"-"<<a[2];
	else if(a[1]*a[2]==a[0])
		cout<<a[0]<<"="<<a[1]<<"*"<<a[2];
	else if(a[1]/a[2]==a[0])
		cout<<a[0]<<"="<<a[1]<<"/"<<a[2];
	
	
}
