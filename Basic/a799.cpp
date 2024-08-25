#include <iostream>

int main()
{
    long long n;
	scanf("%lld", &n);
	if (n < 0) n *= -1;
	printf("%lld", n);
}