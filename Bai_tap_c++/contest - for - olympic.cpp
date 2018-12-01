#include<bits/stdc++.h>
using namespace std;

int main()
{
	int A,B,C,D;
	int P,M,G;
	cin>>A>>B>>C>>D;
	cin>>P>>M>>G;
	if(P<=A||M<=A||G<=A)
		cout<<"both"<<endl;
	if((P>=A&&P<=B)||(P>=C&&P<=D))
		cout<<"one"<<endl;
	if((M>=A&&M<=B)||(M>=C&&M<=D))
		cout<<"one"<<endl;
	if((G>=A&&G<=B)||(G>=C&&G<=D))
		cout<<"one"<<endl;
	if(P>D||M>D||G>D)
		cout<<"none"<<endl;
}
