#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[3],s,s1;
	cin>>a[0]>>a[1]>>a[2];
	s=a[1]-a[0];
	s1=a[2]-a[1];
	if(s1>=s){
		cout<<s1-1;
	}
	else{
		cout<<s-1;
	}
}
