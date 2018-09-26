#include <iostream>
using namespace std;

int A(int m,int n)
{
if(m==0) return n+1;
if(m>0 && n==0) return A(m-1,1);
return A(m-1,A(m,n-1));
}

int main ()
{
  int n=0, m=0;
  cin>>m>>n;
  unsigned long int ans=A(m,n);
  cout<<ans;
}

