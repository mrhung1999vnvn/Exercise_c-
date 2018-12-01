#include <stdio.h>
#include <math.h>
using namespace std;

int tong(int x,int n)
{
	if(n==0) return x;
	return pow(x,2*n+1)+ tong(x,n-1);
}
void inkq(int kq)
{
	printf("tong la :%d",kq);
}
int main()
{ 
int n,kq,x;
scanf("%d%d",&x,&n);
kq=tong(x,n);
inkq(kq);
return 0;
}

