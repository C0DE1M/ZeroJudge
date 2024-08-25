#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long ans, tmp, x;
	while(scanf("%lld", &x) != EOF)
    {
		ans = 0;
		for(int i = 2;i <= sqrt(x); i++)
        {
			tmp = x % i;
			while(tmp == 0)
            {
				ans += i;
				x /= i;
				tmp = x % i;
			}
		}
		if (x != 1) 
			ans += x;
		printf("%lld\n",ans);
	}
}