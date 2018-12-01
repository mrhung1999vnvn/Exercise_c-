#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,d=0;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<0)
			d++;
	}
	cout<<d;
}
