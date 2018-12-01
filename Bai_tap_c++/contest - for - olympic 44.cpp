#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int v,o,x,h1,h2;
	for(int i=1;i<=n;i++){
		cin>>v>>o>>x>>h1>>h2;
		double t=(double)(x/v*cos(o));
		cout<<t;
	}
}
