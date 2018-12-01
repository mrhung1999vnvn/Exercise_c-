#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	int max=0,d=0,c=0;
	cin>>n;
	int a[n];
	bool b[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	//	if(a[i]==0)				//Kiem tra arr neu co 0.
	//		k++;
	}
//	if(k!=0){
//		for(int i=1;i<=n;i++){
//			if(a[i]>=0&&a[i]<=n+1){
//				a[i]=a[i]+1;
//				b[a[i]]=true;
//				if(a[i]==1)
//				{
//					d++;
//					max=i;
//				}					//1 2 3 4  5 =
//			}	
//		}
//	}
	// if(k==0){
		for(int i=1;i<=n;i++){
			if(a[i]>=0&&a[i]<=n+1){
				a[i]=a[i]-1;
				b[a[i]]=true;
				if(a[i]==1){
					d++;
					if(d==1)
					{
						max=i;
					}
				}
			}
		}
//	}
	//Kiem tra mang xem co the tao duoc arr thoa ma khong bi  trung khong
	for(int i=1;i<=n;i++){
		if(b[i]==false)
			c++;
	}
	if(c==0){
		cout<<"YES"<<endl<<max;
	}
	else{
		cout<<"NO";
	}
}
