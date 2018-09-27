#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h> 
#include <iostream>
using namespace std;
int mass(int* &a, int &n)
{
int i; int j;

for (i=0; i<n; i++)
    {
    	if(a[i]>-1) {
		for (j=i+1; j<n; j++)
    	{
    		if ((a[i]==a[j])) a[j]=-1;
		}
    	
    }}	 
    
    for (i=0; i<n; i++)
{
	for (j=i+1; j<n; j++)
	{		
		if (a[i]>a[j])
		{
		int c;
		c=a[i];
		a[i]=a[j];
		a[j]=c;	
		}
	}
	
}
int k=-1;
for (i=0; i<n; i++)
{
	if (a[i]==-1) 
	{

	k=i;	}
}

for (i=0; i<n-k; i++)
{
	a[i]=a[i+k+1];

}
int* b=new int [n-k];
for (i=0; i<n-k; i++)
{
	b[i]=a[i];
}
delete [] a ;
a=b;
n=n-k-1;
}

int main()
{
	int i=0;
	int k;
	int n=100;
	int* a=new int [n];
	for (i=0; i<n; i++)
	{
		a[i]=rand() %700;
	}
	mass(a,n);
	for (i=k; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}
