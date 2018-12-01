#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	int d=0,d1=0;
	getline(cin,a);
	for(int i=0;a[i]!='\0';i++){
		if(a[i]=='W')d++;
		else if(a[i]=='B')d1++;
	}
	if(d==d1)cout<<1;
	else cout<<0;
}
