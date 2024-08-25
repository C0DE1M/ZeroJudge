#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int a, b, tmp, num;
    int ans;
    while (scanf("%d %d", &a, &b) != EOF)
    {
    	ans = 0;
        for (; a <= b; a++)
        {
			if (a == 1) continue;
            num = 1;
        for (int i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                num = 0;
                break;
            }
        }
        ans += num;
        }
        printf("%d\n", ans);
    }
}