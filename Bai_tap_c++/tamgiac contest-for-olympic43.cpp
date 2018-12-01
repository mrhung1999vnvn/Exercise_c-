#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,n;
	double s=0.0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b>>c;
		s=s+(float)(c*acot(((-a*cos(b)-b*cos(a))/3)/((a*sin(b)+b*sin(a))/3)));
	}
	cout<<s;
}
