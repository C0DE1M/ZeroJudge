#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  	string s;
	int a[26];
	int flag;
	while (getline(cin, s))
	{
		flag = 0;
		for (int i = 0; i < 26; i++)
		{
			a[i] = 0;
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				a[s[i] - 'a']++;
			}
			else if (s[i] >= 'A' && s[i] <= 'Z')
			{
				a[s[i]- 'A']++;
			}
		}
		for (int i = 0; i < 26; i++)
		{
			if(a[i] % 2 == 1)
			{
				flag += 1;
				if (flag > 1)
				{
					printf("no...\n");
					break;
				}
			}
		}
		if (flag <= 1)
		{
			printf("yes !\n");
		}
	}
}