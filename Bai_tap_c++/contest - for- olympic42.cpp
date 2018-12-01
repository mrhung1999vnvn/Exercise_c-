#include<bits/stdc++.h>
using namespace std;


int main(){
	int l,d,n,m,x,s1=0,s2=0,k1,k2;
	cin>>l>>d>>x;
	while(s1!=x){
		n=l;
		s1=0;
		for(;n>0;n=n/10){
			k1=n%10;
			s1=s1+k1;
		}
		l++;
	}
	cout<<l-1<<endl;
	while(s2!=x){
		s2=0;
		m=d;
		for(;m>0;m=m/10){
			k2=m%10;
			s2=s2+k2;
		}
		d--;
	}
	cout<<d+1;
}
