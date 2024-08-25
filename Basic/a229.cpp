#include <iostream>
using namespace std;

char arr[27];
int n;

void x(int l, int r, int now)
{
	if(r > l || l > n)
    {
		return;
	}
	else if (now == 2 * n)
    {
		arr[2 * n] = '\0';
		printf("%s\n", arr);
		return;
	}
	else
    {
		arr[now] = '(';
		x(l + 1, r, now + 1);
		arr[now] = ')';
		x(l, r + 1, now + 1);
	}
}

int main()
{
    int left, right, now;
	while (cin >> n)
    {
		left = 0;
		right = 0;
		now = 0;
		x(left, right, now);
	}
}