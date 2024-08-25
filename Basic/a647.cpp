#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int n;
    float ans = 0;
    scanf("%d", &n);
    int a, b;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        b = b - a;
        ans = (float)b / a;
        if (ans >= 0)
        {
            ans += 0.0000001;
        }
        else
        {
            ans -= 0.0000001;
        }
        ans *= 10000;
        printf("%.2f%% ", round(ans) / 100);
        ans /= 100;
        if (ans >= -7.00 && ans < 10.00)
            printf("keep\n");
        else
            printf("dispose\n");
    }
}