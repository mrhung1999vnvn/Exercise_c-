#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string a;
//	cin>>n;
	getline(cin,a);
	int k = a.size();
	while(sqrt(k)!=(int)k)
	{
		k++;
	}
	cout<<k;
}
