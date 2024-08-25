#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, num;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++)
    {
		num = 1;
		cin >> s;
		for (int j = 0; j < s.size(); j++)
        {
			num *= int(s[j]) - 48;
		}
		cout << num << "\n";
	}
}