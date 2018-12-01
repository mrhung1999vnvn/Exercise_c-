#include<iostream>
#include<math.h>
using namespace std;

int main(){
	long n,w,a,b,s=0;
	cin>>w>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		s=s+(a*b);
	}
	int k=0;
	k=s/w;
	cout<<k;
}
