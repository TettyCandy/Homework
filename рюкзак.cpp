#include <iostream>
using namespace std;
int main()
{

    double weightMAX;
    int n=10;
    double a[n],b, h,weight[n],price[n];
    cin >> weightMAX;
    for (int i = 0;i<n;i++)
    {
        cin >> weight[i];
        cin >> price[i];
        a[i] = price[i]/weight[i];
    }
    for (int i = 0;i<n;i++)
     {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                b = a[j];
                h = weight[j];
                weight[j] = weight[j + 1];
                weight[j + 1] = h;
                a[j] = a[j + 1];
                a[j + 1] = b;
            }
        }
     }
       for (int i = 0;i<n;i++)
       {
           if (weightMAX >= weight[i]) {

            weightMAX = weightMAX - weight[i];
           }
           else
            {
           b = weightMAX/weight[i];
           weightMAX = weightMAX - weight[i];
           cout << b;
           break;
           }
       }
}
