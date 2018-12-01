#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k;
	cin>>n;
	vector <int>v;
	v.push_back(n%10);
	while(n/=10){
		v.push_back(n%10);
	}
	if( next_permutation(v.rbegin(),v.rend())){		//kiem tra viec dao co khong
		for(int i=v.size()-1;i>=0;i--){
			cout<<v[i];
		} 
	}
	else cout<<0;
//	if(m>n){
		
//	}
}
