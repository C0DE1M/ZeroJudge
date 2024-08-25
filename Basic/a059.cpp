#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, sum = 0;
	cin >> n;
	int arr[2 * n];
	for(int i = 0; i < 2 * n; i++)
    {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
    {
		for (int j = 0; pow(j, 2) < arr[2 * i + 1]; j++)
        {
			if ((pow(j, 2) >= arr[2 * i]) && (pow(j, 2) <= arr[2 * i + 1]))
            {
				sum += pow(j, 2);
			}
		}
		printf("Case %d: %d\n", i + 1, sum);
		sum = 0;
	}
}