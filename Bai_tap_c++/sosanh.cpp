#include<bits/stdc++.h>
using namespace std;

int main(){
	long  a,b,c,d;
	long n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c>>d;
		if(pow(a,b)<pow(c,d))
			cout<<"<"<<endl;
		else if(pow(a,b)>pow(c,d))
			cout<<">"<<endl;
		else if(pow(a,b)==pow(c,d))
			cout<<"="<<endl;
	}
}
