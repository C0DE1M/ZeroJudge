#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int n, time;
	scanf("%d", &n);
	while (n != 0)
	{
		time = 0;
		while (n % 2 != 0)
		{
			time++;
			n /= 2;
		}
		printf("%d\n", time);
		scanf("%d", &n);
	}
}