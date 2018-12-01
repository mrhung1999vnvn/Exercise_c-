#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	long long a[10000];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]=0)
			a[i]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i]==j){
				d++;
			}
		}
	}
	if(d<n){
		
	}
}

