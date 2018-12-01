#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,list;
	while(cin>>n&&n){
		cin.ignore();
		map<string,int>type;
		string line;
		list++;
		for(int i=1;i<=n;i++){
			getline(cin,line);
			istringstream iss(line);
			string loai;						
			while(iss>>loai);
			for(int i=0;loai[i]!='\0';i++){
				if(loai[i]>='A'&&loai[i]<='Z')
					loai[i]=loai[i]+32;						
			}
			type[loai]++;
		}
		cout<<"List "<<list<<": "<<endl;
		for(map<string,int>::iterator it = type.begin();it!=type.end();it++){
			cout<<it->first<<" | "<<it->second<<endl;
		}
	}
}
