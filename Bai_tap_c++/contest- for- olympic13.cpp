#include<iostream>
#include<cmath>
#include<map>
using namespace std;
map<int ,int >m;
bool kt(int num)
{
    for(int i=2;i<=sqrt((float)num);i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }

	if(num==1)
		return false;
	while(num!=1)
	{
		if(m[num])
		{
			return false;
		}
		else
		{
			m[num]=1;
			int temp=0;
			int j=num;
			for(;j>0;j=j/10)
			{
				temp=temp+pow(j%10,2);
			}
			num=temp;
		}
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int ind,num;
		cin>>ind>>num;
		cout<<ind<<"\t"<<num<<"\t"<<(kt(num)?"YES":"NO")<<endl;
		m.clear();
	}
}
