#include<bits/stdc++.h>
using namespace std;

#define pi 3.14159265
int main(){
	int n;
	cin>>n;
	double v,o,x,h1,h2,re1=0.0,re2=0.0, g=9.81;
	double t=0;
	for(int i=1;i<=n;i++){
		cin>>v>>o>>x>>h1>>h2;
		 t=x/(v*cos(o*pi/180.0));
		 re1=v*t*cos(o*pi/180.0);
		 re2=v*t*sin(o*pi/180.0)-0.5*g*t*t;
		double l=(h2-h1)/2;
		if(re2-1>=h1&&re2+1<=h2){
			cout<<"safe"<<endl;}
		else{
			cout<<"Not safe"<<endl;
		}
	}
}
