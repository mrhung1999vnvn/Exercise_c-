#include<bits/stdc++.h>
using namespace std;

int s=0;
int u[31],v[31];
int domino(int n){
	u[0]=v[1]=1;
	u[1]=v[0]=0;
	for(int i=2;i<=n;i++){
		u[i]=2*v[i-1]+u[i-2];
		v[i]=u[i-1]+v[i-2];
	}
}

int main(){
	int n,s;
	while(cin>>n,n!=-1){
		domino(n);
		cout<<u[n]<<endl;
	}
}
