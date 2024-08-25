#include <iostream>
using namespace std;

int main()
{
    int n, tmp, x = 0, y = 0, z = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		if (tmp == 0) continue;
		else if (tmp % 3 == 0) x += 1;
		else if (tmp % 3 == 1) y += 1;
		else z += 1;
	}
	cout << x << " " << y << " " << z;
}