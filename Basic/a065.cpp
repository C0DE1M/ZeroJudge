#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string s;
	int tmp;
	cin >> s;
	tmp = int (s[0] - 64);
	for (int i = 1; i < s.size(); i++)
    {
		tmp = tmp - int(s[i] - 64);
		if(tmp < 0) tmp *= -1;
		cout << tmp;
		tmp = int(s[i] - 64);
	}
}