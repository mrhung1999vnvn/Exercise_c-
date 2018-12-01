#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string a;
	while(cin>>n){
		getline(cin,a);
		for(int i=0;i<n;i++){
			for(int j=a.size()-1;j>0;j--){
				if(a[j]=='Z'){
					a[j]=a[j]+5;
				}
				else if(a[j]=='_'){
					a[j]=a[j]-49;
				}
				else if(a[j]=='.'){
					a[j]=a[j]+19;
				}
				else
					a[j]=a[j]+1;
			}
		}
		for(int j=a.size()-1;j>=0;j--){
			cout<<a[j];
		}
		cout<<endl;
	}
}
