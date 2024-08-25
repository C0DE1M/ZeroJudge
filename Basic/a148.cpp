#include <iostream>
using namespace std;

int main()
{
	int n, sum;
	while (cin >> n)
    {
		sum = 0;
		int arr[n];
		for (int i = 0; i < n; i++)
        {
			cin >> arr[n];
			sum += arr[n];
		}
		if (float(sum) / float(n) > 59)
        {
			cout << "no" << endl;
		}
		else
        {
			cout << "yes" << endl;
		}
	}
}