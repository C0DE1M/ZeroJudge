#include <iostream>
using namespace std;

int main()
{
	long long a, b, tmp;
    while (scanf("%lld %lld", &a, &b) != EOF)
    {
		while (b > 0)
        {
			tmp = b;
			b = a % b;
			a = tmp;
		}
		printf("%lld\n", a);
	}
}