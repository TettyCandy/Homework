#include <iostream>
#include <cstdlib>
using namespace std;

struct Array
{
Array(int n) 
 {
Arrray = new int (n);
 };
int& operator [] (int n) 
 {
return Arrray[n];
 };
int* Arrray = 0;
};


int main() 
{
	int n=10;
    Array a(n);
    int i=0;
    for (i=0;i<n;i++)
    {
    	a[i]=rand();
	}
    cout << a[n-1]<<endl;

}

