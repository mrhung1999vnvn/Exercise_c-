#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	float p,s;
	cin>>a>>b>>c;
//	c=(float)(c/2);
	p=(float)(a+b+c)/2;
	s=(float)sqrt(p*(p-a)*(p-b)*(p-c));
//	s=a*a*(float)(sqrt(3)/4);
	cout<<s;
}
