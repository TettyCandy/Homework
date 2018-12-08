#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double a[n], b[n];
	int i;
	int imin, bmin;
	int kol=0;
	double min=2;
	for (i=0; i<n; i++)
	{
		cin>>a[i]>>b[i];		
		if (b[i]<min) 
		{
			min=b[i];
			imin=i;
			bmin=b[i];
		}
	
		
	}
    while ((min<1)&&(kol<n))
    {
    	kol++;
    	b[imin]=2;
    	min=2;
		for (i=0; i<n; i++)
    	{
    		if ((b[i]<min)&&(a[i]>=bmin))
		{
			min=b[i];
			imin=i;
			
		}
		
		}
		bmin=min;
cout<<min;
	}
	
	cout<<kol-1;	
	
}
