#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int num;
	int x, y, z, w, n, m, pos_time;
	string s;
	scanf("%d", &num);
	for(int i = 0; i < num; i++)
	{
		s = "";
		pos_time = 0;
		scanf("%d %d %d %d %d %d", &x, &y, &z, &w, &n, &m);
		z *= -1;
		w *= -1;
		n *= -1;
		getline(cin, s);
		getline(cin, s);
		for(int j = 0; j < s.size(); j++)
		{
			m += n * pos_time;
			if (m <= 0) break;
			if(s[j] == ' ') j++;
			if(s[j] == '1')
			{
				m += x;
			}
			else if (s[j] == '2')
			{
				m += y;
			}
			else if (s[j] == '3')
			{
				m += z;
			}
			else if (s[j] == '4')
			{
				m += w;
				pos_time += 1;
			}
			j += 1;
		}
		if (m <= 0)
		{
			printf("bye~Rabbit\n");
		}
		else
		{
			printf("%dg\n", m);
		}
	}
}