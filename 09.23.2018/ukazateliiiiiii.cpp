#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
    int n=10,i,j;
    int a[n];

    for (i=0;i<n;i++)
    {
        *(a+i)=rand() % 100;
    }

    for (i=0;i<n;i++)
    {
        for (j=1;j<n;j++)
        {
            if (*(a+j)<*(a+j-1))
            {
                int c;
                c=*(a+j);
                *(a+j)=*(a+j-1);
                *(a+j-1)=c;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        cout<<*(a+i)<<" ";
    }
}


