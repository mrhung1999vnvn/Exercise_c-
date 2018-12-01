#include<bits/stdc++.h>
using namespace std;

int main(){
    int b,k,g,s=0;
    cin>>b>>k>>g;
    s=k/g;
	b=b-1;
	if(b%s!=0){
		s=b/(k/g);
		s++;
		}
		else s=b/(k/g);
    cout<<s;
}
