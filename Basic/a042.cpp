#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            cout << 0 << "\n";
        }
        else if (n < 3)
        {
            cout << 2 * n << "\n";
        }
        else
        {
            cout << n * (n - 1) + 2 << "\n";
        }
    }
}