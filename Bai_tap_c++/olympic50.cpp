#include<bits/stdc++.h>
using namespace std;

int chartoint(char k){
	k = k - '0';
	return k;
}
int bt(string a,string b,string s){
	long long m=0,d,d2,k=0;
	d=a.size();
	d2=b.size();
	if(d>d2){
		b.insert(0,d-d2,'0');
	}
	else{
		a.insert(0,d2-d,'0');
		d=b.size();
	}
	for(int i=d-1;i>=0;i--){
		m=m+chartoint(a[i])+chartoint(b[i]);
		s[i]=(m%10)+'0';
		m=m/10;
	}
	if(m>0)
		cout<<m;
	for(int i=0;i<d;i++)
		cout<<s[i];
}
int main(){
//	ios::sync_with_stdio(false);
//	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	string a,b,s;
	cin>>a>>b;
	bt(a,b,s);
	return 0;
}
