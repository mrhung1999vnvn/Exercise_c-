#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, a,b,w,s=0;
	cin>>w>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		s=s+(a*b);
	}
	cout<<s/w;
}
