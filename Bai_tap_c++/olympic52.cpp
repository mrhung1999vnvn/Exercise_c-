#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,d=0;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<m){
			if(m-a[i]<=20){
				d++;
			}
		}
	}
	if(d!=0){
		cout<<d;
	}
	else{
		cout<<"impossible";
	}
}
