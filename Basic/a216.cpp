#include <iostream>
using namespace std;

long long g (long long n)
{
	if (n == 1) return 1;
	else
	{
		return(n * (n + 1) / 2 + g(n - 1));
	}
}

int main()
{
  	long long n;
	long long f;
	while (cin >> n && n != EOF)
	{
		f = 0;
		for(int i = 0; i < n; i++)
		{
			f += i;
		}
		printf("%lld %lld\n", n * (n + 1) / 2, g(n));
	}
	return 0;
}