#include <iostream>
using namespace std;
int main()
{
	int n,imax;
	cin>>n;
	double s;
	cin>>s;
	double mass[n], price[n], otn[n], max=0;
	for (int i=0; i<n; i++)
	{
		cin>>mass[i];
		cin>>price[i];
		otn[i]=price[i]/mass[i];
		if(otn[i]>=max)
		{
			imax=i;
			max=otn[i];
		}
		
	}
	while ((s>0)&(max>0))
	{
		if((s-mass[imax])>0)
		{
		s-=mass[imax];
		cout<<"1*"<<imax+1<<" ";	
		}
		else if ((s-mass[imax])<=0)
		{
			cout<<s/mass[imax]<<"*"<<imax+1;
			s=0;
		}
		otn[imax]=0;
		max=0;
		for (int i=0; i<n; i++)
		{
		if(otn[i]>=max)
		{
			imax=i;
			max=otn[i];
		}	
		}
	}
}
