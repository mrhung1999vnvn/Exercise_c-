#include<bits/stdc++.h>
using namespace std;
vector <string>a(10);
int n,m,d=0;
string t;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			getline(cin,t);
			a.push_back(t);
		}
	}
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;j++){
//			if(a[i][j]==0){
//				if(a[i-1][j]==1&&a[i][j+1]==1&&a[i+1][j]==1&&a[i][j-1]==1){
//					a[i][j]=1;
//				}
//			}
//		}
//	}		
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;j++){
//			if(a[i][j]==1){
//				if(a[i-1][j]==0)
//					d++;
//				if(a[i][j+1]==0)
//					d++;
//				if(a[i+1][j]==0)
//					d++;
//				if(a[i][j-1]==0)
//					d++;
//			}
//		}
//	}
//	cout<<d;

}
