#include <iostream>
using namespace std;

int main()
{
    int n;
	long long a, b, c;
	cin >> n;
	for (int i = 0; i < n; i++)
    {
		cin >> a >> b >> c;
		if (a == 1) printf("%lld\n", b + c);
		else if (a == 2) printf("%lld\n", b - c);
		else if (a == 3) printf("%lld\n", b * c);
		else if (a == 4) printf("%lld\n", b / c);
	}
}