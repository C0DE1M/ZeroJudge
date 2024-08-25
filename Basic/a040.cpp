#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m, sum = 0;
    int tmp = 0,i = 0;
    bool flag = 0;
    cin >> n >> m;
    int x[i];
    while (n <= m)
    {
        tmp=n;
        sum=0;
        while (pow(10, i) <= n)
        {
            i++;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            x[j] = tmp / pow(10, j);
            tmp -= int(x[j] * pow(10, j));
            sum += pow(x[j], i);
        }
        if (sum == n)
        {
            cout << n << " ";
            flag = 1;
        }
        for (int j = i - 1; j >= n; j--)
        {
            x[j] = 0;
        }
        n++;
    }
    if (flag == 0)
    {
        cout << "none";
    }
}