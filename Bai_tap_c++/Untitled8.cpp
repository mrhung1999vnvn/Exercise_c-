#include<bits/stdc++.h>
using namespace std;

int main()
{
	int A,B,C,D;
	int M,P,G;
	cin>>A>>B>>C>>D;
	cin>>M>>P>>G;
	if(A<=B&&C<=D&&B<=C){
	if(A==B&&C!=D)
	{
		if(M<=A)
			cout<<"both"<<endl;
		if(M>B&&M<D)
			cout<<"one"<<endl;
		if(M>=D)
			cout<<"none"<<endl;	
		
		if(P<=A)
			cout<<"both"<<endl;
		if(P>B&&P<D)
			cout<<"one"<<endl;
		if(P>=D)
			cout<<"none"<<endl;
		
		if(G<=A)
			cout<<"both"<<endl;
		if(G>B&&G<D)
			cout<<"one"<<endl;
		if(G>=D)
			cout<<"none"<<endl;
	}
	else if(C==D&&A!=B){
		if(M<=A)
			cout<<"both"<<endl;
		if(M>=B&&M<=C)
			cout<<"one"<<endl;
		if(M>D)
			cout<<"none"<<endl;	
		
		if(P<=A)
			cout<<"both"<<endl;
		if(P>=B&&P<=C)
			cout<<"one"<<endl;
		if(P>D)
			cout<<"none"<<endl;
		
		if(G<=A)
			cout<<"both"<<endl;
		if(G>=B&&G<=C)
			cout<<"one"<<endl;
		if(G>D)
			cout<<"none"<<endl;
	}
	else if(A==B&&C==D&&B!=C){
		if(M<=A)
			cout<<"both"<<endl;
		if(M==C)
			cout<<"one"<<endl;
		if(M>D)
			cout<<"none"<<endl;
				
		if(P<=A)
			cout<<"both"<<endl;
		if(P==C)
			cout<<"one"<<endl;
		if(P>D)
			cout<<"none"<<endl;
		
		if(G<=A)
			cout<<"both"<<endl;
		if(G==C)
			cout<<"one"<<endl;
		if(G>D)
			cout<<"none"<<endl;
	}
	else if(A!=B&&C!=D){
		if(M<=A){
			cout<<"both"<<endl;
		}
		if(M>=B&&M<D)
			cout<<"one"<<endl;
		if(M>=D)
			cout<<"none"<<endl;
			
		if(P<=A){
			cout<<"both"<<endl;
		}
		if(P>=B&&P<D)
			cout<<"one"<<endl;
		if(P>=D)
			cout<<"none"<<endl;
			
		if(G<=A){
			cout<<"both"<<endl;
		}
		if(G>=B&&G<D)
			cout<<"one"<<endl;
		if(G>=D)
			cout<<"none"<<endl;
	}
	else if(A==B&&B==C&&C==D){
		if(M<=A)
			cout<<"both"<<endl;
		if(M>A)
			cout<<"none"<<endl;
		if(P<=A)
			cout<<"both"<<endl;
		if(P>A)
			cout<<"none"<<endl;
		if(G<=A)
			cout<<"both"<<endl;
		if(G>A)
			cout<<"none"<<endl;
	}
}
}
