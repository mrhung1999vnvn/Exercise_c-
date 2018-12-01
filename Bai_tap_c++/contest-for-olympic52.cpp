#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main(){
	int n,d=0,c=0,m=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		string a;
		cin>>a;
		if(a=="mumble"){
			d++;
		}
		else{
			d++;
			m=atoi(a);
			if(d!=m&&m!=0){
				c=1;
			}
		}
	}
	if(c==1){
		cout<<"something is fishy";
	}
	else cout<<"makes sense";
}
