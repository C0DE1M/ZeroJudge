#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    if (n >= 40)
    {
        cout << "100\n";
    }
    else
    {
        while (sum < 60 && n > 0)
        {
            sum += 6;
            n -= 1;
        }
        while (sum < 80 && n > 0)
        {
            sum += 2;
            n -= 1;
        }
        while (sum < 100 && n > 0)
        {
            sum += 1;
            n -= 1;
        }
        cout << sum << "\n";
    }
}